/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusw_store.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 02:02:29 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/25 23:00:52 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/ft_push_swap.h"

int	ft_pusw_store_l_a(char const *argv, t_list **l_a)
{
	int 	error;
	t_list	*tmp_lst;

	ft_putstr("Is arg an int ? ");
	error = (ft_is_int(argv) == 1) ? 0 : 1;
	if (error == 0)
		ft_putstr("Yes\n");
	else
		ft_putstr("No\n");
	if (error == 0)
	{
		ft_putstr("Checking list l_a... ");
		if (*l_a == NULL)
		{
			ft_putstr("list l_a is not initialized.\n");
			ft_printf("Creating new list l_a with new element \"%s\" :\n", argv);
			*l_a = ft_lstnew(argv, ft_strlen(argv) * sizeof(char));
		}
		else
		{
			ft_putstr("list l_a is initialized.\n");
			ft_printf("Adding new element \"%s\" into list l_a :\n", argv);
			tmp_lst = ft_lstnew(argv, ft_strlen(argv) * sizeof(char));
			ft_lstadd(&(*l_a), tmp_lst);
		}
		ft_printf("Element inserted : %s\n\n", (*l_a)->content);
		if (tmp_lst == NULL || *l_a == NULL)
			error = 1;
	}
	return (error);
}
