#!/bin/bash
i=0
while [[ $i -lt $((60)) ]]
do
	resultat=$(cat /proc/meminfo | awk '/^MemTotal/ { total=$2 } /^MemFree/ { free=$2 }
	END { print free*100/total }')
	echo "La memòria lliure és del: $resultat %"
	if [[ resultat < $((10)) ]]
	then 
		./createswap.sh swap$i
	fi
	i=$(($i+1))
	sleep 1
done
