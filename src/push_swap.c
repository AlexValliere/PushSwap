/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 01:02:30 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/25 16:25:58 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/ft_push_swap.h"

int main(int argc, char const *argv[])
{
	t_list	*l_a;
	t_list	*l_b;
	int		error;

	l_a = NULL;
	l_b = NULL;
	error = 0;
	if (argc > 1)
	{
		while (argc > 1 && error == 0)
		{
			ft_putstr("argv[");
			ft_putnbr(argc - 1);
			ft_putstr("] = ");
			ft_putstr(argv[argc - 1]);
			ft_putchar('\n');
			error = ft_pusw_store_l_a(argv[argc - 1], &l_a);
			argc--;
		}
		ft_putstr("Contenu de l_a :");
		ft_pusw_print_l(l_a);
		ft_putstr("\nContenu de l_b :");
		ft_pusw_print_l(l_b);
		ft_putchar('\n');
	}
	else
		error = 1;
	if (error != 0)
		ft_putstr("Error\n");
	return (0);
}
