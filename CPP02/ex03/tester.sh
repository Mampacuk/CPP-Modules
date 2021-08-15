#!/bin/bash

printf "Compiling eval_expr...\n"
printf "make\n"
make

printf "\nSimple Tests\n"

printf "\nTest00: \"( 18.18 + 3.03 ) * 2\"\n"
printf "./eval_expr \"( 18.18 + 3.03 ) * 2\"\n"
./eval_expr "( 18.18 + 3.03 ) * 2"

printf "\nTest01: \"( 5 + 6 ) * 1\"\n"
printf "./eval_expr \"( 5 + 6 ) * 1\"\n"
./eval_expr "( 5 + 6 ) * 1"

printf "\nTest02: \"1 + 2 + 3 + 4 + 5\"\n"
printf "./eval_expr \"1 + 2 + 3 + 4 + 5\"\n"
./eval_expr "1 + 2 + 3 + 4 + 5"

printf "\nTest03: \"2 / 1\"\n"
printf "./eval_expr \"2 / 1\"\n"
./eval_expr "2 / 1"

printf "\nTest04: \"(1 + 2) * (3 + 4)\"\n"
printf "./eval_expr \"(1 + 2) * (3 + 4)\"\n"
./eval_expr "(1 + 2) * (3 + 4)"

printf "\nTest05: \"-1 + 2\"\n"
printf "./eval_expr \"-1 + 2\"\n"
./eval_expr "-1 + 2"

printf "\nFalse Tests\n"

printf "\nTest05: \"(1 + 2) * ((3 + 4)\"\n"
printf "./eval_expr \"(1 + 2) * ((3 + 4)\"\n"
./eval_expr "(1 + 2) * ((3 + 4)"

printf "\nTest06: \"1\"\n"
printf "./eval_expr \"1\"\n"
./eval_expr "1"

printf "\nTest07: \")\"\n"
printf "./eval_expr \")\"\n"
./eval_expr ")"

printf "\nTest08: \"(\"\n"
printf "./eval_expr \"()\"\n"
./eval_expr "()"

printf "\nTest09: \"4 + b\"\n"
printf "./eval_expr \"4 + b\"\n"
./eval_expr "4 + b"