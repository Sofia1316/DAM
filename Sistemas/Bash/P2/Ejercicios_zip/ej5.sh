#!/bin/bash

# 2. Haz un bucle `for` que recorra todos los archivos dentro de `test5/`.
# 3. Para cada archivo, comprueba con un `if` si **termina** en `.jpg`.
#    - Una forma sencilla es usar `[[ $archivo == *.jpg ]]`.
# 4. Si se cumple, renómbralo para que la extensión `.jpg` se convierta en `.old`.
#    - Puedes usar `sed` para crear el nuevo nombre:
# 5. Si el archivo **no** acaba en `.jpg`, no hagas nada.

for file in test5/*; # recorremos todos los archivos de la carpeta test5 
do
	if [[ $file == *.jpg ]]; then
	mv "$file" "${file%.jpg}.old" 
		# mover a test5 el cambio de los archivos terminados en .jpg a .old
		# el $ se encarga de acceder al valor de una variable
		# % elimina la parte final de una cadena, en este caso, la más corta que es .jpg
	fi
done