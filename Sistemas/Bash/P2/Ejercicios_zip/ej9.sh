#!/bin/bash

# Haz un bucle para recorrer test9/
# Con un if, verifica si SUBDIR es un directorio (opción d).
# Dentro del if, crea otro bucle que recorra los archivos .txt de ese subdirectorio:
# Al ejecutar el script, deberías ver la primera línea de cada archivo .txt en folder1 y folder2.

for SUBDIR in test9/* # para comprobar todos los archivos que contiene test9
do
	if [[ -d $SUBDIR ]]; then # el -d comprueba si SUBDIR es una carpeta
		echo "$SUBDIR es un directorio" # imprime las carpetas encontradas encontrados

		for file in $SUBDIR/*.txt; # comprueba todos los .txt y en este caso se debe de poner el $ porque es un for anidado
		do
			head -n 1 "$file" # para que se imprima solo la primera línea del principio de los .txt de SUBDIR
		done
	fi
done


