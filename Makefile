# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apetit <apetit@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/24 21:56:51 by apetit            #+#    #+#              #
#    Updated: 2013/12/27 15:11:02 by apetit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
NAME		= push_swap

SRC			=	src/ft_pusw_check.c \
				src/ft_pusw_ops_pt1.c \
				src/ft_pusw_print.c \
				src/ft_pusw_sort.c \
				src/ft_pusw_store.c \
				src/push_swap.c

OBJ			= $(SRC:.c=.o)

CFLAGS		= -Wall -Werror -Wextra

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
			cd $(LIBFT_DIR) && $(MAKE) $@
			$(RM) $(NAME)

re:			fclean all

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -I $(LIBFT_DIR)/includes/ -o $@ -g

.PHONY:		all clean re fclean
