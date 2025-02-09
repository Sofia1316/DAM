#!/bin/bash

# 1. Crea un script `ej3.sh`.
# 2. Haz un bucle `for` que recorra todos los archivos que contengan la palabra `log` dentro de `test3/`.
# 3. Usa un `if` con `grep -q "ERROR"` para determinar si hay líneas que contienen la palabra `"ERROR"`.
#   - Si existe `"ERROR"`, muestra `"El log ARCH tiene errores"`.
#   - En caso contrario, muestra `"El log ARCH no tiene errores"`.

for file in test3/*log*; 
do
	if grep -q "ERROR" "$file"; then
		echo "El log  tiene errores"
	else
		echo "El log no tiene errores"
	fi
done