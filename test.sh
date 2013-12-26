#!/bin/sh
make fclean
make
chmod +x ./push_swap
./push_swap 1 2 4 3 5
