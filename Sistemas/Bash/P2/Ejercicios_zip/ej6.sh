#!/bin/bash

# 2. Haz un `for` para iterar sobre todos los `.txt` en `test6/`.
# 3. Cuenta cuántas líneas tiene cada archivo usando `grep`: TOTAL_LINEAS=$(grep -c '^' "$archivo")
# Si el número de líneas es mayor a 3, muestra un mensaje "El archivo X tiene más de 3 líneas".De lo contrario, "El archivo X tiene 3 líneas o menos".

for file in test6/*.txt; # buscamos los archivos terminados en .txt de la carpeta test6
do
	TOTAL_LINEAS=$(grep -c '^' "$file") # para contar las líneas de cada archivo
	if((TOTAL_LINEAS >= 3)); then # si la variable contar líneas encuentra más de 3 o 3...
		echo "El archivo $file tiene más de 3 líneas"
	else 
		echo "El archivo $file tiene 3 líneas o menos"
	fi
done