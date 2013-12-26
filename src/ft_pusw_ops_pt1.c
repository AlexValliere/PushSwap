/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusw_ops_pt1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 23:08:04 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/26 01:16:16 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include "../includes/ft_push_swap.h"

void	ft_pusw_op_s(t_list **lst)
{
	int	size;

	size = ft_pusw_get_list_size(*lst);
	if (size >= 2)
		ft_lstswap(&(*lst), &((*lst)->next));
}

void	ft_pusw_op_p(t_list **dst, t_list **src)
{
	t_list	*new_elem;

	ft_putstr("Call to function ft_pusw_op_p\n");
	new_elem = NULL;
	if (ft_pusw_get_list_size(*src) > 0)
	{
		new_elem = ft_lstnew((*src)->content, (*src)->content_size);
		ft_printf("Add new content : %s\n", (*src)->content);
		if (*dst == NULL)
		{
			ft_putstr("Dest is not initialized : creating dest.\n");
			*dst = malloc(sizeof(t_list));
			ft_putstr("Adding new content to dest.\n");
			(*dst)->content = malloc((*src)->content_size);
			ft_memcpy((*dst)->content, (*src)->content, (*src)->content_size);
			(*dst)->content_size = (*src)->content_size;
			(*dst)->next = NULL;
			ft_printf("New content dest : %s\n", (*dst)->content);
			ft_putstr("Deleting first content of src.\n");
			ft_lstdelfirst(&(*src));
		}
		else
		{
			ft_putstr("Dest is initialized.\nAdding new content to dest.\n");
			ft_lstadd(&(*dst), new_elem);
			ft_printf("New content dest : %s\n", (*dst)->content);
			ft_lstdelfirst(&(*src));
			ft_putstr("Deleting first content of src.\n");
		}
	}
	ft_putchar('\n');
}
