#!/bin/bash

# 1. Crea un script `ej2.sh`.
# 2. En él, escribe un bucle `for` que vaya del **1 al 5** (puedes usar `{1..5}` o la forma C `for (( i=1; i<=5; i++ ))`).
# 3. En cada iteración, usa un `if` para comprobar si `i` es par o impar:

for (( i=1; i<=5; i++ ))
do
	if (( i % 2 == 0 ));
	then
    	echo "El número $i es par"
  	else
    	echo "El número $i es impar"
  	fi
  	
done