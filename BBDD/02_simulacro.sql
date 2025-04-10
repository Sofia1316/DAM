-- 1. El número de empleados de representantes de ventas que trabajan en cada oficina dónde salga la oficina a la que pertenecen y el lugar de la oficina. 
select officecode, city, count(employeenumber) as num_representantes
from (
    select employeenumber, officecode oc
    from employees
    where jobtitle = 'sales rep'
) t1
inner join offices t2 on t1.oc = t2.officecode
group by officecode, city;

-- 2. El número de clientes que tiene la empresa que tienen por país que su límite de crédito sea myor de 21000 
select count(customernumber), country from customers
where creditlimit > 21000
group by country;

-- 3. El nombre de los clientes que hay realizado una compra el mes de mayo. (sin que se repitan) 
select customernumber, customername, orderdate from orders
inner join
(select distinct customernumber cn, customername from customers)t1
on orders.customernumber = t1.cn
where month(orderdate) = 5;

-- 4. Saca el nombre, apellido del contacto y teléfono de los clientes que tienen pedido en estado entregado/shipped en España. 
select distinct shippedDate, customerNumber, customername, phone, country from orders
inner join
(select customerNumber cn, customername, phone, country from customers
where country='spain')t1
on orders.customerNumber=t1.cn;

-- 5. La suma total del gasto por pedido, teniendo en cuenta que esta desglosado por precio de unidad y hay varias unidades por pedido 
select ordernumber, sum(quantityordered * priceeach) total from orderdetails
group by ordernumber;

-- 6. El número/código de empleado, el nombre de empleado, la ciudad dónde trabaja.  
select employeenumber, firstname, lastname, city, officecode from offices
inner join
(select employeenumber, officecode oc, firstname, lastname from employees) t1
on offices.officecode = t1.oc;

-- 7. El nombre de empleado que ha atendido a más clientes.  
select employeenumber, firstname, lastname, num_clientes from employees
inner join
(select salesrepemployeenumber, count(customernumber) as num_clientes
    from customers
    where salesRepEmployeeNumber is not null
    group by salesrepemployeenumber
    order by num_clientes desc
    limit 1
) t1
on employees.employeenumber = t1.salesrepemployeenumber;

-- 8. El nombre de clientes que no han realizado ningún tipo de pedido 
select customername, customernumber from costumers
inner join (
    select distinct customernumber
    from orders
) t1
on customers.customernumber = t1.customernumber
where t1.customernumber is null;

-- 9. El nombre de los jefes y el número de personas que tienen al cargo. 
select nombre_jefe, count(employeenumber) as empleados_a_cargo
from (
    select employeenumber, concat(firstname, ' ', lastname) as nombre_jefe
    from employees
) t1
inner join (
    select employeenumber, reportsto
    from employees
) t2 on t1.employeenumber = t2.reportsto
group by nombre_jefe;

-- 10. El nombre del cliente y la cantidad que ha pagado a la empresa y el representante de ventas (nombre y apellido) y su correo de contacto. 
select customername, amount, nombre_representante, email
from (
    select customernumber, customername, salesrepemployeenumber
    from customers
) t1
inner join (
    select customernumber, amount
    from payments
) t2 on t1.customernumber = t2.customernumber
inner join (
    select employeenumber, concat(firstname, ' ', lastname) as nombre_representante, email
    from employees
) t3 on t1.salesrepemployeenumber = t3.employeenumber;
