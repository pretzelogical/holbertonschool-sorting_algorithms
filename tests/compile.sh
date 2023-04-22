#!/usr/bin/env bash
# This script will compile the test for whichever project you specify.
# Usage: ./compile.sh <#>

test="$1.c"
confirmSpeak="Compiling test $test"

case $1 in
	0)	echo "$confirmSpeak"
		gcc "$test" ../0-bubble_sort.c ../print.c -o "$1.out"
		;;
	1) 	echo "$confirmSpeak"
		gcc "$test" ../1-insertion_sort_list.c ../print.c -o "$1.out"
		;;
	2)	echo "$confirmSpeak"
		gcc "$test" ../2-selection_sort.c ../print.c -o "$1.out"
		;;
	*) echo "$1 INCORRECT NOW SELF DESTRUCTING"
		;;
esac
