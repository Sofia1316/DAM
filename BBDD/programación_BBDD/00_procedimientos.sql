-- 00 PROCEDIMIENTO
DELIMITER $$ -- en un inicio el delimitador se cambia para que no se quede el procedimiento estancado en las consultas que le meto
CREATE PROCEDURE clientePorApellido(IN apellido1 char(100))
BEGIN
	select * from clientes where apellido = apellido1;
END$$
DELIMITER ; -- el delimitador al final debo de ponerlo con ;
-- Y así es como lo llamo
CALL clientePorApellido("García");

-- 01 PROCEDIMIENTO
SET @NUMERO = 0; -- esto es una variable global
DELIMITER $$
CREATE PROCEDURE numeroClientes(IN apellido1 char(100), out numero int)
BEGIN
	select count(*) from clientes where apellido = apellido1;
END$$
DELIMITER ;
-- así llamo también a la variable global
CALL numeroClientes("García", @NUMERO);

-- 02 PROCEDIMIENTO
DELIMITER $$
CREATE PROCEDURE sumar(IN numero1 int,in numero2 int)
BEGIN
	declare suma int; -- definición de variable local
    set suma = numero1 + numero2;
    select suma; -- como un printf
END$$
DELIMITER ;

set @suma=0;
call sumar2(2,4,@suma);
select @suma;

-- 03 PROCEDIMIENTO
DELIMITER $$
CREATE PROCEDURE numeroClientes2(IN apellido1 char(100))
BEGIN
	declare numero int; -- creamos la variable
	select count(*) into numero from clientes where apellido = apellido1; -- el resultado de esta consulta se almacena en numero a través de into numero
    select numero;
END$$
DELIMITER ;
CALL numeroClientes("García", @NUMERO);

-- 04 FUNCIONES (no se usa en IN porque es una función)
DELIMITER $$
CREATE FUNCTION numeroClientes2(apellido1 char(100))
returns int
BEGIN
	set numero = 
	(select count(*) into numero from clientes where apellido = apellido1);
    return numero;
END$$
DELIMITER ;

-- 05 FUNCIONES
DELIMITER $$
CREATE FUNCTION numeroCliente(apellido1 char(100))
returns int unsigned -- La función devuelve un valor entero sin signo (o sea, no puede ser negativo), ideal para contar cosas.
deterministic -- Le dices al motor de MySQL que esta función siempre devuelve el mismo resultado para los mismos parámetros
BEGIN
	declare numero int;
	select count(*) into numero from clientes where apellido = apellido1;
    return numero;
END$$
DELIMITER ;