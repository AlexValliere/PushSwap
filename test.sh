#!/bin/sh
make fclean
make
chmod +x ./push_swap
./push_swap 11 0 -21 6 -i
