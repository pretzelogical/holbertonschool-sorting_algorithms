#!/usr/bin/env bash
# This script will compile the test for whichever project you specify.
# Usage: ./compile.sh <#>

test="$1.c"
confirmSpeak="Compiling test $test"

echo "$1"
case $1 in
	0)	echo "$confirmSpeak"
		gcc "$test" ../0-bubble_sort.c ../print.c -o "$1.out"
		;;
	*) echo "$1 INCORRECT NOW SELF DESTRUCTING"
		;;
esac
