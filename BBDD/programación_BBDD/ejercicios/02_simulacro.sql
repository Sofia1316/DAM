-- 1. Realiza una función que dado el código de jugador devuelva si puede jugar en la posición C o no.
delimiter //
create function jugarPosicionC(codJug int)
returns varchar(30)
deterministic
begin
	declare pos varchar(25);

	select Posicion into pos
    from jugadores
    where codigo = codJug;
    
    if pos like '%C%' then 
		return 'Puede jugar en posición C';
	else 
		return 'No puede jugar en posición C';
	end if;
end //
delimiter ;

-- 2. Realiza una función que dado el número de partido te saque el nombre del equipo ganador, en caso de empate, que saque ambos equipos e indique que han empatado.
delimiter //
create function equipoGanador(numPartido int)
returns varchar(30)
deterministic
begin
	declare loc varchar(25);
    declare vis varchar(25);
    declare PL int;
    declare PV int;
    
    select 
		equipo_local, 
        equipo_visitante,
        puntos_local,
        puntos_visitante
	into loc, vis, PL, PV
	from partidos
	where codigo = numPartido;
        
	if PL > PV then
        return concat('Ganador: ', loc);
    elseif PV > PL then
        return concat('Ganador: ', vis);
    else
        return concat('Empate entre ', loc, ' y ', vis);
    end if;
end //
delimiter ;

-- 3. Realiza una función que saque el nombre del jugador que ha anotado más puntos por partido.
delimiter //
create function jugadorMayorPuntuacion()
returns varchar(30)
deterministic
begin
	declare puntos int;
    declare nombre varchar(25);

	select Puntos_por_partido, nom into puntos, nombre from estadisticas
    inner join
    (select nom, codigo, temporada as temp from partidos
    inner join
    (select codigo as cod, Nombre as nom from jugadores)t1
    on partidos.codigo = t1.cod)t2
    on estadisticas.temporada = t2.temp
    where Puntos_por_partido = (select max(Puntos_por_partido))
    limit 1;
    
    return nombre;
end //
delimiter ;

-- 4. Realiza un procedimiento que dado el código de jugador permita corregir la procedencia de ese jugador y que devuelva el nombre del jugador que se ha cambiado la procedencia.

-- 5. Realiza un procedimiento que le sume la variable que se le pasa comoparámetro al peso de cada jugador.

-- 6. Crea unprocedimiento que sirva para insertar los datos de un partido.