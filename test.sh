#!/bin/bash

echo "[Invalid Cases]"
for ARG in "2 2" "a" "2a" "-2147483649" "2147483648"
do
  printf "./push_swap $ARG\n"
  eval "./push_swap $ARG"
done
