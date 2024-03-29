/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 01:02:30 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/27 15:30:55 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/ft_push_swap.h"

int main(int argc, char const *argv[])
{
	t_list	*l_a;
	t_list	*l_b;
	int		error;
	int		opt;

	l_a = NULL;
	l_b = NULL;
	error = 0;
	opt = 0;
	if (argc > 1)
	{
		while (argc > 1 && error == 0)
		{
			if (ft_strcmp(argv[argc - 1], "-i") == 0)
				opt = 1;
			else
				error = ft_pusw_store_l_a(argv[argc - 1], &l_a);
			argc--;
		}
		ft_pusw_sort_1(&l_a, &l_b, opt);
	}
	else
		ft_printf("usage : %s [-i] [numbers ...]", argv[0]);
	if (error != 0)
		ft_putstr("Error\n");
	return (0);
}
