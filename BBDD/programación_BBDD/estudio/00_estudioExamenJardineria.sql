-- 01. Crear un procedimiento que registre un nuevo cliente, pasando todos los campos por parámetros.
delimiter //
create procedure nuevoCliente(
	in cod int,
    in n_nombre varchar(20),
    in n_contactoN varchar(20),
    in n_contactoA varchar(20),
    in n_telf int,
    in n_fax int,
    in n_pais varchar(20),
    in cp int,
    in repVentas int,
    in limitCred int)
begin
	insert into clientes
    (CodigoCliente, NombreCliente, NombreContacto, ApellidoContacto, 
    Telefono, Fax, Pais, CodigoPostal, CodigoEmpleadoRepVentas, LimiteCredito)
    values
    (cod, n_nombre, n_contactoN, n_contactoA, n_telf, n_fax, n_pais, cp, repVentas, limitCred);
end //
delimiter ;

-- 02. Modificar el límite de crédito de un cliente dado su código.
delimiter //
create procedure cambiarLimCred(in codCliente int, in n_credito int)
begin
	update clientes 
    set LimiteCredito = n_credito
    where CodigoCliente = codCliente;
end //
delimiter ;

-- 03. Actualizar el estado de todos los pedidos de un cliente a 'Cancelado'.
delimiter //
create procedure actualizarEstado(in codCliente int)
begin
	update pedidos
    set estado = 'Cancelado'
    where CodigoCliente = codCliente;
end //
delimiter ;

-- 04. Cambiar a todos los empleados de una oficina a otra.
delimiter //
create procedure cambiarOficinas(in origen varchar(20), in destino varchar(20))
begin
	update empleados
    set CodigoOficina = destino
    where CodigoOficina = origen;
end //
delimiter ;

-- 05. Asignar un nuevo representante de ventas a todos los clientes de una ciudad.
delimiter //
create procedure asignar_representante_por_ciudad(
    in ciudad_cliente varchar(50),
    in nuevo_rep int
)
begin
    update clientes
    set codigoEmpleadoRepVentas = nuevo_rep
    where Ciudad = ciudad_cliente;
end //
delimiter ;

-- 06. Crear un procedimiento que liste los pedidos de un cliente por su nombre mostrando fecha, estado y total si es posible.
delimiter //
create procedure verPedidoCliente(in NC varchar(25))
begin
	select NombreCliente, FechaPedido, estado from clientes
	inner join
	(select CodigoCliente as codCliente, CodigoPedido, FechaPedido, estado from pedidos)t1
	on clientes.CodigoCliente = t1.codCliente
    where NombreCliente = NC;
end //
delimiter ;

-- 07. Crear un procedimiento que saque todos los pedidos pendientes junto al nombre del cliente y el representante de ventas.
delimiter //
create procedure pedidoPendiente()
begin
	select distinct NombreCliente, CodigoEmpleadoRepVentas, estado from pedidos
	inner join
	(select NombreCliente, CodigoEmpleadorepVentas, CodigoCliente as CC from clientes)t1
	on pedidos.CodigoCliente = t1.CC
	where estado = 'Pendiente';
end //
delimiter ;

-- 08. Crear un procedimiento que liste los productos más caros por gama.
delimiter //
create procedure masCaro()
begin
	select Gama, PrecioVenta from productos
    group by Gama;
end //
delimiter ;

-- 09. Crear un procedimiento que liste los productos con bajo stock (por ejemplo 20 unidades).
delimiter //
create procedure masBarato()
begin
	select distinct CantidadEnStock, Nombre from productos
    order by CantidadEnStock asc
    limit 20;
end //
delimiter ;
