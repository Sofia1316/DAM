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

-- 4. Un procedimiento que dado un cliente saque el estado de los pedidos que no estén cancelados

-- 5. Un procedimiento que dado un nombre de producto saque el producto con su precio.

-- 6. Un procedimiento que inserte un nuevo pedido de un cliente, los productos, y la cantidad.

-- 7. Un procedimiento que modifique el nombre de un producto

-- 8. Un procedimiento que modifique el estado de un pedido.