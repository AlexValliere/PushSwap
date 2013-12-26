# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/24 21:56:51 by apetit            #+#    #+#              #
#    Updated: 2013/12/25 23:23:56 by alexandre        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
NAME		= push_swap

SRC			=	src/ft_pusw_check.c \
				src/ft_pusw_ops_pt1.c \
				src/ft_pusw_print.c \
				src/ft_pusw_store.c \
				src/push_swap.c

OBJ			= $(SRC:.c=.o)

CFLAGS		= -Wall -Werror -Wclobbered -Wempty-body -Wignored-qualifiers -Wmissing-field-initializers -Wmissing-parameter-type -Wold-style-declaration -Woverride-init -Wsign-compare -Wtype-limits -Wuninitialized -Wunused-but-set-parameter

LIBFT_DIR	= ./libft

RM			= rm -rf

all:		make_lib $(NAME)

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) -L $(LIBFT_DIR)/ -lft

make_lib:
			cd $(LIBFT_DIR) && $(MAKE)

clean:
			cd $(LIBFT_DIR) && $(MAKE) $@
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -I $(LIBFT_DIR)/includes/ -o $@ -g

.PHONY:		all clean re fclean
