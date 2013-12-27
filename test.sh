#!/bin/sh
make fclean
make
chmod +x ./push_swap
./push_swap -55 3 -21 32
./push_swap -i -55 3 -21 32
