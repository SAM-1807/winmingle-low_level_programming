#!/bin/bash

DIR="0x01-variables_if_else_while"
FLAGS="-Wall -Werror -Wextra -pedantic -std=gnu89"

echo "========== Compiling and running all files =========="
echo ""

for file in \
	0-positive_or_negative \
	1-last_digit \
	2-print_alphabet \
	3-print_alphabets \
	4-print_alphabt \
	5-print_numbers \
	6-print_numberz \
	7-print_tebahpla \
	8-print_base16 \
	9-print_comb \
	100-print_comb3 \
	101-print_comb4 \
	102-print_comb5
do
	echo "---------- $file.c ----------"
	gcc $FLAGS "${file}.c" -o "/tmp/${file}" 2>&1
	if [ $? -eq 0 ]; then
		"/tmp/${file}"
		echo ""
	else
		echo "COMPILATION FAILED"
	fi
	echo ""
done
