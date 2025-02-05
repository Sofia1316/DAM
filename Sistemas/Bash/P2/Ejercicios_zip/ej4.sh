#!//bin/bash

for (( i=1; i<=5; i++ ))
do
	if ((i == 3)); then
		echo "Nos saltamos el número $i"
		continue
	else
		echo "i = $i"
	fi
done