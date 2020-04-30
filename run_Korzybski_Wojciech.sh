#!/bin/bash
if [ "$1" == "clone" ]
then
    git clone https://github.com/Grzybu1/Narzedzia-do-debugowania
    rm Narzedzia-do-debugowania/run_Korzybski_Wojciech.sh
fi
if [ "$1" == "run" ]
then
	if [ `basename "$PWD"` == "Narzedzia-do-debugowania" ]
	then
    	cat InformacjeOgolne.txt
    else
    	cat Narzedzia-do-debugowania/InformacjeOgolne.txt 
    fi
fi
if [ "$1" == "clean" ]
then
	if [ `basename "$PWD"` == "Narzedzia-do-debugowania" ]
	then
    	cp run_Korzybski_Wojciech.sh ..
    	cd ..
    fi
    rm -r -f Narzedzia-do-debugowania
fi
