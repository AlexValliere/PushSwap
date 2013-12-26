#!/bin/sh
make fclean
make
chmod +x ./push_swap
./push_swap 11 0 82 21 6 9
