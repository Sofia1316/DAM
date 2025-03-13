-- Para contar cuantas provincias hay en la tabla (sin repeticiones)
select count(poblacion) from (select distinct poblacion from cliente) as t1;

-- Multiplicamos los precios por sus cantidades y entonces nos salen el id_venta con el total_venta (operación)
select id_venta,sum(total) as total_venta 
from
(select id_venta,producto_cod_producto, (cantidad*precio) as total
from
(select producto_cod_producto, cantidad, id_venta, precio from venta
inner join producto
on venta.Producto_cod_producto=producto.cod_producto)t1)t2
group by id_venta;

--
select count(Cliente_n_cliente) as numero_cliente 
from
(select Cliente_n_cliente, sum(cantidad) as total
from venta group by Cliente_n_cliente
having total between 10 and 20)t1
where total between 10 and 20;
