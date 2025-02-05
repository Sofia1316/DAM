#!//bin/bash

for file in test5/*; do

	if [[ $file == *.jpg ]]; then
		mv $file `echo $file | sed 's/(\*.\.\)/\.jpg)'`  
	else

	fi

done