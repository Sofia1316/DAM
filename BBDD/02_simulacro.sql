-- 1. El número de empleados de representantes de ventas que trabajan en cada oficina dónde salga la oficina a la que pertenecen y el lugar de la oficina. 
select officecode, city, count(employeenumber) as num_representantes
from (
    select employeenumber, officecode
    from employees
    where jobtitle = 'sales rep'
) t1
inner join offices t2 on t1.officecode = t2.officecode
group by officecode, city;

-- 2. El número de clientes que tiene la empresa que tienen por país que su límite de crédito sea myor de 21000 
select country, count(customernumber) as num_clientes
from (
    select customernumber, country
    from customers
    where creditlimit > 21000
) t1
group by country;

-- 3. El nombre de los clientes que hay realizado una compra el mes de mayo. (sin que se repitan) 
select distinct customername
from (
    select customernumber, customername
    from customers
) t1
inner join (
    select customernumber
    from orders
    where month(orderdate) = 5
) t2 on t1.customernumber = t2.customernumber;

-- 4. Saca el nombre, apellido del contacto y teléfono de los clientes que tienen pedido en estado entregado/shipped en España. 
select customername, contactlastname, phone
from (
    select customernumber, customername, contactlastname, phone, country
    from customers
    where country = 'spain'
) t1
inner join (
    select customernumber
    from orders
    where status = 'shipped'
) t2 on t1.customernumber = t2.customernumber;

-- 5. La suma total del gasto por pedido, teniendo en cuenta que esta desglosado por precio de unidad y hay varias unidades por pedido 
select ordernumber, sum(total_linea) as total_gasto
from (
    select ordernumber, quantityordered * priceeach as total_linea
    from orderdetails
) t1
group by ordernumber;

-- 6. El número/código de empleado, el nombre de empleado, la ciudad dónde trabaja.  
select employeenumber, nombre_empleado, city
from (
    select employeenumber, officecode, concat(firstname, ' ', lastname) as nombre_empleado
    from employees
) t1
inner join (
    select officecode, city
    from offices
) t2 on t1.officecode = t2.officecode;

-- 7. El nombre de empleado que ha atendido a más clientes.  
select nombre_empleado, num_clientes
from (
    select salesrepemployeenumber, count(customernumber) as num_clientes
    from customers
    group by salesrepemployeenumber
    order by num_clientes desc
    limit 1
) t1
inner join (
    select employeenumber, concat(firstname, ' ', lastname) as nombre_empleado
    from employees
) t2 on t1.salesrepemployeenumber = t2.employeenumber;

-- 8. El nombre de clientes que no han realizado ningún tipo de pedido 
select customername
from (
    select customernumber, customername
    from customers
) t1
left join (
    select distinct customernumber
    from orders
) t2 on t1.customernumber = t2.customernumber
where t2.customernumber is null;

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
