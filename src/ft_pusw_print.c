/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusw_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 02:54:12 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/26 15:53:22 by alexandre        ###   ########.fr       */
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
		while (next_link != NULL)
		{
			ft_printf("%s ", next_link->content);
			next_link = next_link->next;
		}
	}
	else
		ft_putstr("(null)\n");
	ft_putchar('\n');
}
