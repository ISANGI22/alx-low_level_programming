#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c -L. *.c
ar -rc liball.a *.o
ranlib liball.a

