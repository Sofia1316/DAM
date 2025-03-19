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
select min(PrecioVenta), max(PrecioVenta)
from productos;

-- 7. Sacar la ciudad y el teléfono de las oficinas de Estados Unidos.
select Ciudad, Telefono from oficinas
where Pais='EEUU';

-- 8. Sacar el nombre, los apellidos y el email de los empleados a cargo de Alberto Soria.
select Nombre, Apellido1, Apellido2, Email from empleados
where CodigoJefe='2';

-- 9. Sacar el cargo, nombre, apellidos y email del jefe de la empresa.
select Nombre, Apellido1, Apellido2, Email from empleados
where puesto='Director General';

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
select count(*) as numero_de_clientes from clientes
where ciudad = 'Madrid';

-- 15. Sacar cuántos clientes tienen las ciudades que empiezan por M.
select count(*) as numero_de_clientes from clientes
where ciudad like 'M%';

-- 16. Sacar el código de empleado y el número de clientes al que atiende cada representante de ventas.
select codigo_empleado, count(*) as numero_de_clientes from clientes
group by codigo_empleado;

-- 17. Sacar el número de clientes que no tiene asignado representante de ventas.
select count(*) as numero_de_clientes from clientes
where codigo_empleado is null;

-- 18. Sacar cuál fue el primer y último pago que hizo algún cliente.
select min(fecha_pago) as primer_pago, max(fecha_pago) as ultimo_pago
from pagos;

-- 19. Sacar el código de cliente de aquellos clientes que hicieron pagos en 2008.
select distinct codigo_cliente from pagos
where year(fecha_pago) = 2008;

-- 20. Sacar los distintos estados por los que puede pasar un pedido.
select distinct estado from pedidos;

-- 21. Sacar el número de pedido, código de cliente, fecha requerida y fecha de entrega de los pedidos que no han sido entregados a tiempo.


-- 22. Sacar cuántos productos existen en cada línea de pedido.


-- 23. Sacar un listado de los 20 códigos de productos más pedidos ordenado por cantidad pedida.


-- 24. Sacar el número de pedido, código de cliente, fecha requerida y fecha de entrega de los pedidos cuya fecha de entrega ha sido al menos dos días antes de la fecha requerida.


-- 25. Sacar la facturación que ha tenido la empresa en toda la historia, indicando la base imponible, el IVA y el total facturado. NOTA: La base imponible se calcula sumando el coste del producto por el número de unidades vendidas. El IVA, es el 21% de la base imponible, y el total, la suma de los dos campos anteriores.


-- 26. Sacar la misma información que en la pregunta anterior, pero agrupada por código de producto filtrada por los códigos que empiecen por FR.


-- 27. Obtener el nombre del producto más caro.


-- 28. Obtener el nombre del producto del que más unidades se hayan vendido en un mismo pedido.


-- 29. Obtener los clientes cuya línea de crédito sea mayor que los pagos que haya realizado.


-- 30. Sacar el producto que más unidades tiene en stock y el que menos unidades tiene en stock.


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