#! /bin/bash
echo -n "*** This is a script for running a spell check on a user-defined filename"
echo
echo -n "*** Please type name of TeX file: "
read -e FILENAME
#cmd="aspell check --lang=el"
cmd="aspell check --lang=en_GB"
echo -n "*** Executing command: "$cmd" tex/"$FILENAME""
echo 
$cmd $FILENAME
