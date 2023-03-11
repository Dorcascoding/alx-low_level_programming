#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -c *.c

ar -cr liball.a *.c

ranlib liball.a
