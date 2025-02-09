#!/bin/bash

# Ejecuta `ps aux` para sacar una lista de todos los procesos activos y añádelo (sin sobreescribir) en el archivo `processes.txt`
# Haz un bucle `for` que recorra cada línea (proceso) de `processes.txt`
# En el interior, verifica si `ps aux | grep -q "$PROC"`.
#  - Si retorna verdadero (estado 0), significa que el proceso `PROC` está corriendo.
#  - Muestra `"El proceso PROC está en ejecución"`.
#  - Si no se encuentra, muestra `"El proceso PROC no está en ejecución"`.
# Ejecuta el script y prueba añadiendo o quitando procesos en processes.txt para ver la diferencia.

ps aux > processes.txt # ps aux se encarga de listar todos los procesos del sistema con información detallada, y esto se guarda en processes.txt 

for PROC in $(cat processes.txt) # para mirar cada línea de processes.txt
do
	if ps aux | grep -q "$PROC"; then # volvemos a mirar la lista de procesos, grep busca cada línea y se comprueba si está en ejecución o no (el -q devuelve un 0 lo está)
		echo "El proceso $PROC está en ejecución"
	else
		echo "El proceso $PROC no está en ejecución"
	fi
done 