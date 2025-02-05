#!//bin/bash

for file in test1/*.txt; do

	if ( grep -q '.' "$file" ); then # Si grep encuentra un carácter (.) en el archivo, significa que no está vacío.
		echo "El archivo $file no está vacio" 
	else
		echo "El archivo $file está vacío"
	fi

done
