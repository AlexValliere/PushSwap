#!/bin/sh
make fclean
make
chmod +x ./push_swap
./push_swap 2 1 3 6 5 8
