#!/bin/bash

# 1. Crea un script `ej1.sh`.
# 2. Usa un bucle `for` que recorra todos los archivos `.txt` dentro de `test1/`.
# 3. Para cada archivo, comprueba (con un `if`) si **contiene** algo. Puedes usar: grep -q '.' "$archivo"
# - Si `grep` encuentra un carácter (`.`) en el archivo, significa que **no** está vacío.
# - Si no encuentra nada, el archivo está vacío.

for file in test1/*.txt; 
do
	if grep -q '.' "$file"; then # Si grep encuentra un carácter (.) en el archivo, significa que no está vacío.
		echo "El archivo $file no está vacio" 
	else
		echo "El archivo $file está vacío"
	fi
done