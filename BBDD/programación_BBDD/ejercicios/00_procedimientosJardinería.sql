--  1. Un procedimiento que inserte un nuevo empleado dónde se le pasa los datos por parámetros
delimiter $$
create procedure nuevoEmpleado(
	in emCodigo int,
    in emNombre varchar(50),
    in emApellido varchar(50),
    in emApellido2 varchar(50),
    in emCorreo varchar(30),
    in emCodigoOfi int,
    in emCodigoJef int,
    in emPuesto varchar(40)
)
begin
	INSERT INTO empleados (codigo_empleado, nombre, apellido1, apellido2, email, codigo_oficina, codigo_jefe, puesto
	) VALUES ( emCodigo, emNombre, emApellido, emApellido2, emCorreo, emCodigoOfi, emCodigoJef, emPuesto);
end$$
delimiter ;

-- 2. Un procedimiento que cambia un empleado de jefe, se le pasa el número de empleado y el del jefe.
delimiter $$
create procedure cambiarJefe(
	in emCodigo int,
    in jefCodigo int
)
begin
	update empleados
    set CodigoJefe = jefCodigo
    where CodigoEmpleado = emCodigo;
end$$
delimiter ;

-- 3. Un procedimiento que saca el nombre de empleados y su jefe según la ciudad de la oficina
delimiter //
create procedure ejercicio3(in ciudadEmpleado varchar(30))
begin
select Nombre, Apellido1, Apellido2, NombreJefe, ApellidoJefe, ApellidoJefe2, ciudad
from oficinas
inner join
		(select Nombre, Apellido1, Apellido2, NombreJefe, ApellidoJefe, ApellidoJefe2, CodigoOficina 
		from empleados
	inner join
		(select CodigoEmpleado, Nombre NombreJefe, Apellido1 
		ApellidoJefe, Apellido2 ApellidoJefe2 from empleados)jefe 
	on empleados.CodigoJefe = jefe.CodigoEmpleado)t1
on oficinas.codigoOficina=t1.codigoOficina
where ciudad = ciudadEmpleado;
end //
delimiter ;

-- 4. Un procedimiento que dado un cliente saque el estado de los pedidos que no estén rechazado
delimiter //
create procedure ejercicio4(in clientePedidoNoRechazado int)
begin
select CodigoPedido, Estado, CodigoCliente from pedidos
where CodigoCliente = clientePedidoNoRechazado and estado!='rechazado';
end //
delimiter ;

-- 5. Un procedimiento que dado un nombre de producto saque el producto con su precio.
delimiter //
create procedure precioProducto(in nombreProductoPrecio varchar(30))
begin
select distinct CodigoProducto, Nombre, PrecioVenta from productos
where Nombre = nombreProductoPrecio;
end //
delimiter ;

-- 6. Un procedimiento que inserte un nuevo pedido de un cliente, los productos, y la cantidad.
delimiter //
create procedure nuevoPedido(
	in codPedido int, in codCliente int, in fec date, in est varchar(15), in codProducto varchar(15), in cant int)
begin
INSERT INTO pedidos (
        CodigoPedido,
        FechaPedido,
        FechaEsperada,
        Estado,
        CodigoCliente
    ) VALUES (
        codPedido,
        fec,
		DATE_ADD(fec, INTERVAL 7 DAY),
    	est,
        codCliente
    );

INSERT INTO detallepedidos (
        CodigoPedido,
        CodigoProducto,
        Cantidad,
        PrecioUnidad,
        NumeroLinea
    )
    SELECT 
        codPedido,
        codProducto,
        cant,
        precio_venta,
        1
    FROM productos
    WHERE CodigoProducto = codProducto;
end //
delimiter ;

-- 7. Un procedimiento que modifique el nombre de un producto
delimiter //
create procedure modificarNomProd(in codProd varchar(10), in nombreProd varchar(40))
begin
	update productos
    set Nombre = nombreProd
    where CodigoProducto = codProd;
end //
delimiter ;

-- 8. Un procedimiento que modifique el estado de un pedido.
delimiter //
create procedure modificarEstadoPedido(in codPedido int, in estadoPedido varchar(25))
begin
	update pedidos
    set estado = estadoPedido
    where CodigoPedido = codPedido;
end //
delimiter ;

-- 9. Crea un procedimiento que dado la ubicación de la oficina devuelva el país y el número de empleados de ese país.
delimiter //
create procedure ubiOficina(in ciudadOficina varchar(50))
begin
    select Pais, count(*) as numEmp from oficinas
    inner join empleados on empleados.codigoOficina = oficinas.codigoOficina
    where oficinas.ciudad = ciudadOficina
    group by oficinas.pais;
end //
delimiter ;

-- 10. Crea un procedimiento para que se pueda realizar un pedido y darse de alta como cliente a la vez.
delimiter //
create procedure PedidoYAlta(
in codCliente int,
in nombre varchar(25),
in telf int,
in fax int,
in direc varchar(25),
in limCred int,

in codPedido int,
in fecha date,
in estd varchar(15)
) 
begin
	insert into cliente(
    CodigoCliente,
    NombreCliente,
    Telefono,
    Fax,
    LineaDireccion1,
    LimiteCredito
    ) values (
    codCliente,
	nombre,
	telf,
	fax,
	direc,
	limCred);
    
    insert into pedido(
    CodigoPedido,
    FechaPedido,
    Estado
    ) values (
    CodPedido,
    fecha,
    estd
    );
end //
delimiter ;

-- 11. Crea un procedimiento que inserte automáticamente una vez que se realice el pedido, los datos en pagos.
delimiter //
create procedure pedidoPagosDatos(
    in codPedido int,
    in codCliente int,
    in fecha date,
    in fechaEsperada date,
    in estado varchar(15))
begin
    insert into pedidos(
        CodigoPedido,
        FechaPedido,
        FechaEsperada,
        Estado,
        CodigoCliente
    ) values (
        codPedido,
        fecha,
        fechaEsperada,
        estado,
        codCliente
    );
    
    insert into pagos(
        CodigoCliente,
        FormaPago,
        IDTransaccion,
        FechaPago,
        Cantidad
    ) values (
        codCliente,
        'Transferencia',
        concat('TX-', codPedido),
        fecha,
        100
    );
end //
delimiter ;

-- 12. Crear un procedimiento que suba el sueldo a todos los empleados. (si llegase a tener salario)
delimiter //
create procedure subirSueldo(subida decimal(100.0))
begin
	update empleados
    set salario = salario + subida;
end //
delimiter ;

-- 13. Crea un procedimiento que saque todos los pedidos que estén en un estado que se le pasa como parámetro.
delimiter //
create procedure verPedidosEstado(in est varchar(15))
begin
	select CodigoPedido, estado from pedidos 
    where estado = est;
end //
delimiter ;

-- 14. Realiza un procedimiento que saque el total de coste de un pedido.
delimiter //
create procedure totalCoste(in cp int)
begin
	select sum(Cantidad * PrecioUnidad) as total from detallepedidos
    where CodigoPedido = cp;
end //
delimiter ;

-- 15. Pasándole un código de pedido que permita insertar la fecha de Entrega si está a NULL.
delimiter //
create procedure fechaEsNULL(in codPedido varchar(25), in FE date)
begin
	update pedidos
    set FechaEntrega = FE
    where CodigoPedido = codPedido and FechaEntrega is null;
end //
delimiter ;

-- 16. Incrementar a todos los pedidos que no tengan fecha de Entrega 2 días más en su fecha esperada.
delimiter //
create procedure añadirDiasPedidos(in extra decimal(2))
begin
	update pedidos
    inner join 
    (select codigo_pedido from pedidos
	where fecha_entrega is null)t1
    on pedidos.CodigoPedido = t1.CodigoPedido
    set pedidos.FechaEsperada = pedidos.FechaEsperada + interval extra day;
end //
delimiter ;