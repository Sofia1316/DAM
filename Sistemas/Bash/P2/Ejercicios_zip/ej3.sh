#!//bin/bash

for file in test3/*log*; do

	if (( grep -q == "ERROR")); then
		echo "El log  tiene errores"
	else
		echo "El log no tiene errores"
	fi
	
done