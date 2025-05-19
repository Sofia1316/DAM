--  1. Crea una función que cuente los productos que contengan la cadena que introduzcas
delimiter //
create function contarPalabras(cadena varchar(50))
returns int
deterministic
begin
	declare total int;
    
    select count(*) into total
    from productos
    where nombre like concat('%', cadena, '%');
    return total;
end //
delimiter ;
-- uso de funciones con select
select contarPalabras('peral');

-- 2. Realiza la función de factorial de un número (método recursivo)
delimiter //
create function factorial(num int)
returns bigint
deterministic
begin
	if num = 0 or num = 1 then
        return 1;
    else
        return num * factorial(num - 1);
    end if;
end //
delimiter ;

-- 2.b iterativo
delimiter //
create function factorial2(num int)
returns int
deterministic
begin
    declare res int default 1;
    declare i int default 1;

    if num < 0 then
        return null;
    end if;

    while i <= num do
        set res = res * i;
        set i = i + 1;
    end while;

    return res;
end //
delimiter ;

-- 3. Realiza una función que devuelva el nombre del cliente que ha pagado más en un pedido.
delimiter //
create function clientePagoMayor()
returns varchar(50)
deterministic
begin
	declare nombre varchar(50);
	select NombreCliente into nombre
    from clientes
    inner join pagos
    on clientes.CodigoCliente = pagos.CodigoCliente
    order by LimiteCredito desc
    limit 1;
    return nombre;
end //
delimiter ;

-- 4. Realiza una función que dado un código de usuario y un gasto verifique el crédito. 
-- Si tiene suficiente crédito que modifique el crédito que tiene restando lo que le pasa sino que devuelva que no se puede efectuar la operación.
delimiter //
create function verificarCredito(codUser int, gasto int)
returns varchar(50)
deterministic
begin
	declare credActual decimal(10,2);
	
    select LimiteCredito into credActual from clientes
    where CodigoCliente = codUser;
    
    if credActual >= gasto then
		update clientes
        set LimiteCredito = LimiteCredito - gasto
        where CodigoCliente = codUser;
        
        return 'Operación hecha';
	else
		return 'Saldo insuficiente';
	end if;
end //
delimiter ;

-- 5. Realiza una función que da la bienvenida a un cliente en función si tiene registrada la región o no.
delimiter //
create function bienvenidaRegión(codUSer int) 
returns varchar(50)
deterministic
begin
	declare reg varchar(50);
	select reg into reg from clientes
    where CodigoCliente = codUser;
    
    if reg is null then
		return 'La región es null';
	else 
		return concat('La región existe', reg);
	end if;
end //
delimiter ;

-- 6. Realiza una función que devuelva cuánto dinero vale los productos que
-- están en el catálogo si por cada uno de ellos ha pagado 10% menos de lo que tiene registrado
delimiter //
create function valorDescuento()
returns decimal(12,2)
deterministic
begin
    declare total decimal(12,2);
    select sum(precioVenta * 0.9) into total
    from productos;
    return total;
end //
delimiter ;
