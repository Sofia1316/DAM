#!/bin/bash

# Utiliza un bucle for para leer los nombres del archivo test8/usuarios.txt
# for USUARIO in $(cat usuarios.txt) do (...) done
# En el interior, si el usuario se llama "maria", muestra "Hola maria".De lo contrario, muestra "Hola, USUARIO".

for file in test8/usuarios.txt; 
do
	for USUARIO in $(cat $file); # para poder leer los los nombres que contiene el archivo usuarios.txt
		do
			if [[ $USUARIO == "maria" ]]; then
				echo "Hola maria";
			else 
				echo "Hola $USUARIO";
			fi
		done
done