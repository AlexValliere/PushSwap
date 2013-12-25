/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusw_store.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 02:02:29 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/25 16:42:35 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "../includes/ft_push_swap.h"

int	ft_pusw_store_l_a(char const *argv, t_list **l_a)
{
	int 	error;
	t_list	*tmp_lst;

	ft_putstr("Is arg an int ? ");
	error = (ft_is_int("5") == 1) ? 0 : 1;
	if (error == 0)
		ft_putstr("Yes\n");
	else
		ft_putstr("No\n");
	if (error == 0)
	{
		ft_putstr("Adding int to list l_a...\n");
		tmp_lst = ft_lstnew(argv, ft_strlen(argv) * sizeof(char));
		ft_putstr("Content of new element : ");
		ft_putstr(tmp_lst->content);
		ft_putchar('\n');
		ft_lstadd(&(*l_a), tmp_lst);
		ft_putstr("Element copied : ");
		ft_putstr((*l_a)->content);
		ft_putchar('\n');
		if (tmp_lst == NULL || *l_a == NULL)
			error = 1;
	}
	return (error);
}
