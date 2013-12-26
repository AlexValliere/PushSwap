/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusw_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 22:28:02 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/25 23:12:52 by alexandre        ###   ########.fr       */
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

int	ft_pusw_get_list_size(t_list *lst)
{
	t_list	*next_link;
	int		nbr_element;

	next_link = NULL;
	nbr_element = 0;
	if (lst)
	{
		next_link = lst;
		++nbr_element;
		while (next_link->next != NULL)
		{
			++nbr_element;
			next_link = next_link->next;
		}
	}
	return (nbr_element);
}
