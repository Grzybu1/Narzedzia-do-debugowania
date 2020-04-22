#!/bin/bash
if [ "$1" == "clone" ]
then
    git clone https://github.com/Grzybu1/Narzedzia-do-debugowania
fi
if [ "$1" == "run" ]
then
    cat InformacjeOgolne.txt
fi
if [ "$1" == "clean" ]
then
    rm -r -f Wojciech_Korzybski_projekt Narzedzia-do-debugowania
fi




