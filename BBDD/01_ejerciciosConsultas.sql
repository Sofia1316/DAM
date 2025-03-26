-- 1. Sacar el código de oficina y la ciudad donde hay oficinas.
select CodigoOficina, ciudad from oficinas;

-- 2. Sacar cuántos empleados hay en la compañía.
select count(CodigoEmpleado) 
as numero_empleados from empleados;

-- 3. Sacar cuántos clientes tiene cada país.
select distinct Pais, count(NombreCliente)
from clientes group by Pais;

-- 4. Sacar cuál fue el pago medio en 2008.
select AVG(Cantidad) from pagos 
where FechaPago like '2008%';

-- 5. Sacar cuántos pedidos están en cada estado ordenado descendente por el número de pedidos.
select distinct Estado, count(CodigoPedido) 
from pedidos group by Estado;

-- 6. Sacar el precio del producto más caro y del más barato.
select * from
(select nombre as caro, precioVenta from productos inner join
(select max(PrecioVenta) masCaro from productos)t1
on precioVenta=masCaro)t3
,
(select nombre as barato, precioVenta from productos inner join
(select min(PrecioVenta) masBarato from productos)t2
on precioVenta=masBarato)t4;

-- 7. Sacar la ciudad y el teléfono de las oficinas de Estados Unidos.
select Ciudad, Telefono from oficinas
where Pais='EEUU';

-- 8. Sacar el nombre, los apellidos y el email de los empleados a cargo de Alberto Soria.
select Nombre, Apellido1, Apellido2,Email from empleados
where CodigoJefe=
(select CodigoEmpleado from empleados 
where
Nombre='Alberto' and Apellido1='Soria');

-- 8.1 con un inner join
select Nombre, Apellido1, Apellido2,Email from empleados
inner join
(select CodigoEmpleado from empleados 
where
Nombre='Alberto' and Apellido1='Soria')t1
on empleados.CodigoJefe=t1.CodigoEmpleado;

-- 9. Sacar el cargo, nombre, apellidos y email del jefe de la empresa.
select Nombre, Apellido1, Apellido2, Email from empleados
where puesto='Director General';

-- 9.1 Otra opción
select Nombre, Apellido1, Apellido2,Email from empleados
where CodigoJefe is Null;

-- 10. Sacar el nombre, apellidos y cargo de aquellos que no sean representantes de ventas.
select Nombre, Apellido1, Apellido2, Puesto from empleados
where Puesto !='Representante Ventas';

-- 11. Sacar el número de clientes que tiene la empresa.
select count(CodigoCliente) from clientes;

-- 12. Sacar el nombre de los clientes españoles.
select NombreCliente from clientes
where Pais like 'Spain' or 'España';

-- 13. Sacar cuántos clientes tiene cada país.
select pais, count(*) as numero_de_clientes from clientes
group by pais;

-- 14. Sacar cuántos clientes tiene la ciudad de Madrid.
select ciudad, count(*) as numero_de_clientes from clientes
where ciudad = 'Madrid';

-- 15. Sacar cuántos clientes tienen las ciudades que empiezan por M.
select count(*) from clientes
where ciudad like'M%';

-- 16. Sacar el código de empleado y el número de clientes al que atiende cada representante de ventas.
select CodigoEmpleadoRepVentas, numClientes from
(select CodigoEmpleado from Empleados 
where Puesto='Representante Ventas')t1
inner join
(select CodigoEmpleadoRepVentas, count(NombreCliente) as numClientes
from clientes
group by CodigoEmpleadoRepVentas)t2
on t1.CodigoEmpleado=t2.CodigoEmpleadoRepVentas;

-- 17. Sacar el número de clientes que no tiene asignado representante de ventas.
select NombreCliente, NombreEmpresa from clientes
left join
(select CodigoCliente as a, NombreCliente as NombreEmpresa from clientes
inner join
(select CodigoEmpleado from empleados
where Puesto='Representante Ventas')t1
on clientes.CodigoEmpleadoRepVentas=t1.CodigoEmpleado)as ClienteRep
on clientes.CodigoCliente=ClienteRep.a;

-- 18. Sacar cuál fue el primer y último pago que hizo algún cliente.
select min(FechaPago) as primer_pago, max(FechaPago) as ultimo_pago
from pagos;

-- 19. Sacar el código de cliente de aquellos clientes que hicieron pagos en 2008.
select distinct CodigoCliente from pagos
where year(FechaPago) = 2008;

-- 20. Sacar los distintos estados por los que puede pasar un pedido.
select distinct estado from pedidos;

-- 21. Sacar el número de pedido, código de cliente, fecha requerida y fecha de entrega de los pedidos que no han sido entregados a tiempo.
select CodigoPedido, codigo_cliente, fecha_esperada, fecha_entrega
from pedidos
where fecha_entrega > fecha_esperada;

-- 22. Sacar cuántos productos existen en cada línea de pedido.
select codigo_pedido, count(*) as cantidad_productos
from detalle_pedidos
group by codigo_pedido;

-- 23. Sacar un listado de los 20 códigos de productos más pedidos ordenado por cantidad pedida.
select codigo_producto, sum(cantidad) as cantidad_total
from detalle_pedidos
group by codigo_producto
order by cantidad_total desc
limit 20;

-- 24. Sacar el número de pedido, código de cliente, fecha requerida y fecha de entrega de los pedidos cuya fecha de entrega ha sido al menos dos días antes de la fecha requerida.
select codigo_pedido, codigo_cliente, fecha_esperada, fecha_entrega
from pedidos
where fecha_entrega <= date_sub(fecha_esperada, interval 2 day);

-- 25. Sacar la facturación que ha tenido la empresa en toda la historia, indicando la base imponible, el IVA y el total facturado. NOTA: La base imponible se calcula sumando el coste del producto por el número de unidades vendidas. El IVA, es el 21% de la base imponible, y el total, la suma de los dos campos anteriores.
select sum(detalle_pedidos.cantidad * productos.precio_proveedor) as base_imponible, 
       sum(detalle_pedidos.cantidad * productos.precio_proveedor * 0.21) as iva,
       sum(detalle_pedidos.cantidad * productos.precio_proveedor * 1.21) as total_facturado
from detalle_pedidos
join productos on detalle_pedidos.codigo_producto = productos.codigo_producto;

-- 26. Sacar la misma información que en la pregunta anterior, pero agrupada por código de producto filtrada por los códigos que empiecen por FR.
select productos.codigo_producto, 
       sum(detalle_pedidos.cantidad * productos.precio_proveedor) as base_imponible, 
       sum(detalle_pedidos.cantidad * productos.precio_proveedor * 0.21) as iva,
       sum(detalle_pedidos.cantidad * productos.precio_proveedor * 1.21) as total_facturado
from detalle_pedidos
join productos on detalle_pedidos.codigo_producto = productos.codigo_producto
where productos.codigo_producto like 'fr%'
group by productos.codigo_producto;

-- 27. Obtener el nombre del producto más caro.
select nombre
from productos
order by precio_venta desc
limit 1;

-- 28. Obtener el nombre del producto del que más unidades se hayan vendido en un mismo pedido.
select productos.nombre
from productos
join detalle_pedidos on productos.codigo_producto = detalle_pedidos.codigo_producto
group by productos.nombre
order by sum(detalle_pedidos.cantidad) desc
limit 1;

-- 29. Obtener los clientes cuya línea de crédito sea mayor que los pagos que haya realizado.
select clientes.codigo_cliente, clientes.nombre_cliente
from clientes
join pagos on clientes.codigo_cliente = pagos.codigo_cliente
group by clientes.codigo_cliente
having sum(pagos.monto) < clientes.limite_credito;

-- 30. Sacar el producto que más unidades tiene en stock y el que menos unidades tiene en stock.
(select nombre, cantidad_en_stock
from productos
order by cantidad_en_stock desc
limit 1)
union
(select nombre, cantidad_en_stock
from productos
order by cantidad_en_stock asc
limit 1);

-- 31. Sacar el nombre de los clientes y el nombre de sus representantes junto con la ciudad de la oficina a la que pertenece el representante.


-- 32. Sacar la misma información que en la pregunta anterior pero solo de los clientes que no hayan hecho pagos.


-- 33. Obtener un listado con el nombre de los empleados junto con el nombre de sus jefes.


-- 34. Obtener el nombre de los clientes a los que no se les ha entregado a tiempo un pedido.


-- 35. Sacar un listado de clientes indicando el nombre del cliente y cuántos pedidos ha realizado.


-- 36. Sacar un listado con los nombres de los clientes y el total pagado por cada uno de ellos.


-- 37. Sacar el nombre de los clientes que hayan hecho pedidos en 2008.


-- 38. Listar el nombre del cliente y el nombre y apellido de sus representantes de aquellos clientes que no hayan realizado pagos.


-- 39. Sacar un listado de clientes donde aparezca el nombre de su comercial y la ciudad donde está su oficina.


-- 40. Sacar el nombre, apellidos, oficina y cargo de aquellos que no sean representantes de ventas.


-- Sacar cuántos empleados tiene cada oficina, mostrando el nombre de la ciudad donde está la oficina.
-- Sacar un listado con el nombre de los empleados, y el nombre de sus respectivos jefes.
-- Sacar el nombre, apellido, oficina (ciudad) y cargo del empleado que no represente a ningún cliente.
-- Sacar la media de unidades en stock de los productos agrupados por gama.
-- Sacar los clientes que residan en la misma ciudad donde hay una oficina, indicando dónde está la oficina.
-- Sacar los clientes que residan en ciudades donde no hay oficinas ordenado por la ciudad donde residen.
-- Sacar el número de clientes que tiene asignado cada representante de ventas.
-- Sacar cuál fue el cliente que hizo el pago con mayor cuantía y el que hizo el pago con menor cuantía.
-- Sacar un listado con el precio total de cada pedido.
-- Sacar los clientes que hayan hecho pedido en el 2008 por una cuantía superior a 2000 euros.
-- Sacar cuántos pedidos tiene cada cliente en cada estado.
-- Sacar los clientes que han pedido más de 200 unidades de cualquier producto.
-- Obtener el nombre del cliente con mayor limite de crédito.
-- Obtener el nombre, apellido1 y cargo de los empleados que no representen a ningún cliente.
-- Sacar un listado con el nombre de cada cliente y el nombre y apellido de su representante de ventas.
-- Mostrar el nombre de los clientes que no hayan realizado pagos junto con el nombre de sus representantes de ventas.
-- Listar las ventas totales de los productos que hayan facturado más de 3000 euros. Se mostrará el nombre, unidades vendidas, total facturado y total facturado con impuestos (21% IVA).
-- Listar la dirección de las oficinas que tengan clientes en Fuenlabrada.
-- Sacar el cliente que hizo el pedido de mayor cuantía-- .