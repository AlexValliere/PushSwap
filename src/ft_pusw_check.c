/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusw_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 22:28:02 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/26 16:19:58 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/ft_push_swap.h"

int	ft_pusw_search_value(char *value, t_list *lst)
{
	t_list	*next_link;
	int		is_found;

	next_link = NULL;
	is_found = 0;
	if (lst && value)
	{
		next_link = lst;
		while (next_link->next != NULL)
		{
			if (ft_strcmp(value, next_link->content) == 0)
				is_found = 1;
			next_link = next_link->next;
		}
	}
	return (is_found);
}

int	ft_pusw_is_sort(t_list *lst)
{
	t_list	*next_link;
	int		is_sort;

	next_link = NULL;
	is_sort = 1;
	if (lst)
	{
		next_link = lst;
		while (next_link->next != NULL && is_sort == 1)
		{
			if (ft_strcmp(next_link->content, next_link->next->content) > 0)
				is_sort = 0;
			next_link = next_link->next;
		}
	}
	return (is_sort);
}
