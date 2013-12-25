/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusw_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 02:54:12 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/25 03:00:16 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/ft_push_swap.h"

void	ft_pusw_print_l(t_list *lst)
{
	t_list	*next_link;

	next_link = NULL;
	if (lst)
	{
		next_link = lst;
		while (next_link->next != NULL)
		{
			ft_putnbr(ft_atoi(next_link->content));
			ft_putchar('\n');
			next_link = next_link->next;
		}
	}
}
