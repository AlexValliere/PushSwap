/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusw_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 15:09:11 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/26 16:43:52 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/ft_push_swap.h"

static void	ft_pusw_sort_1_first_elt_of_l_a(t_list **l_a, t_list **l_b)
{
	while (*l_a)
	{
		if ((*l_a)->next != NULL)
		{
			if (ft_strcmp((*l_a)->content, (*l_a)->next->content) > 0)
			{
				ft_pusw_op_s(&(*l_a));
				ft_pusw_print_l(*l_a);
				ft_putstr(" \\ ");
				ft_pusw_print_l(*l_b);
				ft_putstr(" [sa]\n");
			}
			ft_printf("Comparaison between %s and %s : %d\n", (*l_a)->content, (*l_a)->next->content, ft_strcmp((*l_a)->content, (*l_a)->next->content));
		}
		ft_pusw_op_p(&(*l_b), &(*l_a));
		ft_pusw_print_l(*l_a);
		ft_putstr(" \\ ");
		ft_pusw_print_l(*l_b);
		ft_putstr(" [pb]\n");
	}
	while (*l_b)
	{
		ft_pusw_op_p(&(*l_a), &(*l_b));
		ft_pusw_print_l(*l_a);
		ft_putstr(" \\ ");
		ft_pusw_print_l(*l_b);
		ft_putstr(" [pa]\n");
	}
}

void		ft_pusw_sort_1(t_list **l_a, t_list **l_b)
{
	int	is_sort;

	is_sort = 0;
	if (*l_a && !*l_b)
	{
		ft_pusw_print_l(*l_a);
		ft_putstr(" \\ ");
		ft_pusw_print_l(*l_b);
		ft_putchar('\n');
		while (is_sort == 0)
		{
			ft_pusw_sort_1_first_elt_of_l_a(&(*l_a), &(*l_b));
			is_sort = ft_pusw_is_sort(*l_a);
		}
		ft_pusw_print_l(*l_a);
		ft_putstr(" \\ ");
		ft_pusw_print_l(*l_b);
		ft_putchar('\n');
	}
}
