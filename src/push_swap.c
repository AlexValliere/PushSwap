/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 01:02:30 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/27 15:12:12 by apetit           ###   ########.fr       */
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
			error = ft_pusw_store_l_a(argv[argc - 1], &l_a);
			argc--;
		}
		ft_pusw_sort_1(&l_a, &l_b);
	}
	else
		error = 1;
	if (error != 0)
		ft_putstr("Error\n");
	return (0);
}
