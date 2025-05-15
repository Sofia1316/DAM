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


-- 07. Crear un procedimiento que saque todos los pedidos pendientes junto al nombre del cliente y el representante de ventas.


-- 08. Crear un procedimiento que liste los productos más caros por gama.


-- 09. Crear un procedimiento que muestre la cantidad total de pedidos por oficina.


-- 10. Crear un procedimiento que liste los productos con bajo stock (por ejemplo, < 20 unidades).

