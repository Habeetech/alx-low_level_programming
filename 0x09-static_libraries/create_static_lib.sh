#!/bin/bash
gcc -c -WAll -Werror -Wextra *.c
ar -rc liball.a *.o
ranlib liball.a
