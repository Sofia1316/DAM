#!/bin/bash

# 2. Haz un bucle `for` que recorra `test7/*`.
# 3. Si el archivo termina en `.conf`, usa `sed` para reemplazar todas las ocurrencias de `"localhost"` por `"127.0.0.1"` **in place**:

for file in test7/*;
do
	if [[ $file == *.conf ]]; then 
		sed -i 's/localhost/127.0.0.1/g' "$file"
		echo "El archivo $file se ha modificado correctamente"
	fi
done	