-- 1. ¿Cuáles son las poblaciones en las que viven los clientes?
select distinct poblacion from Cliente;

-- 2. ¿Cuáles son los clientes que viven en Madrid?
select * from Cliente 
where Poblacion = 'Madrid';

-- 3. Saca el nombre de los clientes que viven en Madrid y Barcelona
-- Opción 1
	select Nombre from Cliente 
	where Poblacion = 'Madrid' or Poblacion = 'Barcelona';
-- Opción 2
	select nombre from cliente
	where poblacion in ('Madrid','Barcelona'); 

-- 4. ¿Cuál es nombre y teléfono de los clientes que viven en Madrid y vive en la calle amarillo?
select Nombre, Telefono from Cliente 
where Poblacion = 'Madrid' or Direccion = 'Calle Amarilla';

-- 5. Buscar el nombre de los clientes cuyo nombre empiece por M
select distinct Nombre from Cliente 
where nombre like 'M%';

-- 6. Busca el nombre de los clientes cuyo nombre empiece por M pero termine en s
select distinct Nombre from Cliente 
where Nombre like 'M%' and Nombre like '%S';

-- 7. Obtén el nombre de los productos que tengan un precio entre 1500 y 2000
select Nombre from Producto 
where Precio between '1500' and '2000';

-- 8. El nombre de los productos que tenemos en la base de datos sin repeticiones
select distinct nombre from producto;

-- 9. Saca todos los productos que contenga una a en su nombre del producto en la segunda puntuación
select * from producto 
where nombre like '__a%';

-- 10. Saca el nombre de los productos que tengan como primer carácter un 4 y como el número de las décimas el 1.
select nombre from producto
where precio like '4%1_';

-- 11. Número de productos de cada venta.
select id_venta, count(producto_cod_producto) as num_productos
from venta group by id_venta;

-- 12. Cantidad de dinero que tenemos invertido en productos de la tabla Producto.
select sum(precio) as dinero_invertido from Producto;

-- 13. el número de cliente (n_cliente) que haya comprado entre 10 y 20 artículos.
select cliente_n_cliente 
from venta 
group by cliente_n_cliente 
having sum(cantidad) between 10 and 20;

-- 14. número de clientes que hayan comprado entre 10 y 20 artículos.
select count(distinct cliente_n_cliente) as num_clientes
from venta group by cliente_n_cliente 
between 10 and 20;

-- 15. cuenta el número de clientes que se llaman marcos y renombra la columna como "total".
select count(*) as total 
from cliente 
where nombre = 'Marcos';

-- 16. cuenta el número de clientes llamados marcos que viven en la calle amarillo.
select count(*) as total 
from cliente 
where nombre = 'Marcos' 
and direccion like '%Amarillo%';

-- 17. de la tabla venta, el máximo de unidades que se han vendido.
select max(cantidad) as max_unidades_vendidas
from venta;

-- 18. cuenta cuántas personas hay que se llamen de cada tipo.
select nombre, count(*) as total 
from cliente 
group by nombre;

-- 19. junta mediante el producto cartesiano la tabla venta y la tabla cliente.
select * from venta, cliente;

-- 20. junta las tablas venta y cliente mediante una reunión natural, renombrando las tablas y evitando columnas repetidas.
select v.id_venta, v.cliente_n_cliente, v.producto_cod_producto, v.cantidad, c.nombre, c.direccion 
from venta v 
natural join cliente c;

-- 21. crea una tabla única con los datos de las tres tablas.


-- 22. une el nombre de los clientes con el nombre de los artículos.
select nombre from cliente
union
select nombre from producto;
