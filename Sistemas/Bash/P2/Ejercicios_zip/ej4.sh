#!/bin/bash

# 1. Implementa un bucle: for (( i=1; i<=5; i++ )) do # ... done
# 2. Dentro del bucle, si `i` es igual a **3**, usa `continue` para saltarte esa iteración. Muestra un mensaje indicando que se ha **saltado** ese valor.
# 3. Para el resto de iteraciones, imprime `"i = valor"`.

for (( i=1; i<=5; i++ ))
do
	if ((i == 3)); then
		echo "Nos saltamos el número $i"
		continue
	else
		echo "i = $i"
	fi
done