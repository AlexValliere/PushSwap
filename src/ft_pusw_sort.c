/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusw_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 15:09:11 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/27 16:01:30 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/ft_push_swap.h"

static void	ft_pusw_sort_1_opt_i(t_list **l_a, t_list **l_b, int step)
{
	if (step == 1)
	{
		ft_putstr("\033[32m[sa]\033[0m : ");
		ft_pusw_op_s(&(*l_a));
		ft_pusw_print_l(*l_a);
		ft_putstr(" \033[31m\\\033[0m ");
		ft_pusw_print_l(*l_b);
	}
	else if (step == 2)
	{
		ft_putstr("\033[34m[pb]\033[0m : ");
		ft_pusw_op_p(&(*l_b), &(*l_a));
		ft_pusw_print_l(*l_a);
		ft_putstr(" \033[31m\\\033[0m ");
		ft_pusw_print_l(*l_b);
	}
	else if (step == 3)
	{
		ft_putstr("\033[35m[pa]\033[0m : ");
		ft_pusw_op_p(&(*l_a), &(*l_b));
		ft_pusw_print_l(*l_a);
		ft_putstr(" \033[31m\\\033[0m ");
		ft_pusw_print_l(*l_b);
	}
	ft_putchar('\n');
}

static void	ft_pusw_sort_1_elt_of_l_a_2(t_list **l_a, t_list **l_b, int opt)
{
	while (*l_b)
	{
		if (opt == 1)
			ft_pusw_sort_1_opt_i(&(*l_a), &(*l_b), 3);
		else
		{
			ft_pusw_op_p(&(*l_a), &(*l_b));
			ft_putstr("pa ");
		}
	}
}

static void	ft_pusw_sort_1_elt_of_l_a_1(t_list **l_a, t_list **l_b, int opt)
{
	while (*l_a)
	{
		if ((*l_a)->next != NULL)
		{
			if (ft_atoi((*l_a)->content) > ft_atoi((*l_a)->next->content))
			{
				if (opt == 1)
					ft_pusw_sort_1_opt_i(&(*l_a), &(*l_b), 1);
				else
				{
					ft_pusw_op_s(&(*l_a));
					ft_putstr("sa ");
				}
			}
		}
		if (opt == 1)
			ft_pusw_sort_1_opt_i(&(*l_a), &(*l_b), 2);
		else
		{
			ft_pusw_op_p(&(*l_b), &(*l_a));
			ft_putstr("pb ");
		}
	}
	ft_pusw_sort_1_elt_of_l_a_2(&(*l_a), &(*l_b), opt);
}

void		ft_pusw_sort_1(t_list **l_a, t_list **l_b, int opt)
{
	int	is_sort;

	is_sort = 0;
	if (*l_a && !*l_b)
	{
		while (is_sort == 0)
		{
			ft_pusw_sort_1_elt_of_l_a_1(&(*l_a), &(*l_b), opt);
			is_sort = ft_pusw_is_sort(*l_a);
		}
	}
}
