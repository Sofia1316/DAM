-- 1. Crea una función que dado el id del producto devuelva el precio  (RA4) 
delimiter //
create function ejercicio1(idProd int)
returns decimal(10.5)
deterministic
begin
	declare total decimal(10.5);
    
	select precio into total from productos
    	where id_producto = idProd;
    
    	return total;
end //
delimiter ;

select ejercicio1(2); 

-- 2. Crea un procedimiento que devuelva el numero de clientes cuyo nombre comienza por A;  (RA4) 
delimiter //
create procedure ejercicio2()
begin
	select count(nombre) from clientes
    	where nombre like 'A%';
end //
delimiter ;

call ejercicio2();

-- 3. Realiza un procedimiento que devuelva el producto y el nombre del empleado que ha colocado cada producto. (RA4) 
delimiter //
create procedure ejercicio3()
begin
	select nombreEmp, nombre as nombreProd from productos
    inner join
    (select nombre as nombreEmp, id_producto as IDP from empleados
    inner join
    (select id_empleado as IDE, id_producto from secciones)t1
    on empleados.id_empleado = t1.IDE)t2
    on productos.id_producto = t2.IDP;
end //
delimiter ;

call ejercicio3();

-- 4. Realiza un procedimiento que modifica el stock de un producto actualizando un 10%. (RA4,RA5) 
delimiter //
create procedure ejercicio4(in idProd int)
begin
	update productos
    set stock = stock + (stock * 0.1)
    where id_producto = idProd;
end //
delimiter ;

call ejercicio4(2);

-- 5. Realiza un procedimiento de inserción de un empleado entendiendo que el empleado tiene como fecha de ingreso hoy y el salario es random entre 0 y 3000 euros. (RA4,RA5) 
delimiter //
create procedure ejercicio5(
in idEmpleado int,
in nom varchar(100),
in puestoNuevo varchar(50),
in salarioRandom decimal(10.2)
)
begin
	set salarioRandom = floor(rand()*3000);
    
	insert into empleados (
		id_empleado,
        nombre,
        puesto,
        salario,
        fecha_ingreso
    ) values (
		idEmpleado,
        nom,
        puestoNuevo,
        salarioRandom,
        '2025-05-22'
    );
end //
delimiter ;

call ejercicio5(107, 'sofia', 'practicas', '0');

-- 6. Crea un procedimiento que dado un id_empleado si el sueldo es mayor de 1500 euros, cambie el puesto a Encargado (RA4,RA5)
delimiter //
create procedure ejercicio6(in IDE int)
begin
	declare salarioActual int;
    
	select salario into salarioActual from empleados
    where id_empleado = IDE;
    
    if salarioActual > 1500 then
		update empleados
        set puesto = 'Encargado'
        where id_empleado = IDE;
    end if;
end //
delimiter ;

call ejercicio6(5);
call ejercicio6(1);
