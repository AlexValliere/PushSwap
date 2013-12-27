/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusw_ops_pt1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 23:08:04 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/27 15:20:55 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include "../includes/ft_push_swap.h"

void	ft_pusw_op_s(t_list **lst)
{
	int	size;

	size = ft_lstsize(*lst);
	if (size >= 2)
		ft_lstswap(&(*lst), &((*lst)->next));
}

void	ft_pusw_op_p(t_list **dst, t_list **src)
{
	t_list	*new_elem;

	//ft_putstr("Call to function ft_pusw_op_p\n");
	new_elem = NULL;
	if (ft_lstsize(*src) > 0)
	{
		new_elem = ft_lstnew((*src)->content, (*src)->content_size);
		//ft_printf("Add new content : %s\n", (*src)->content);
		if (*dst == NULL)
		{
			//ft_putstr("Dest is not initialized : creating dest.\n");
			*dst = new_elem;
			//ft_printf("New content dest : %s\n", (*dst)->content);
			//ft_putstr("Deleting first content of src.\n");
			ft_lstdelfirst(&(*src));
		}
		else
		{
			//ft_putstr("Dest is initialized.\nAdding new content to dest.\n");
			ft_lstadd(&(*dst), new_elem);
			//ft_printf("New content dest : %s\n", (*dst)->content);
			if (ft_lstsize(*src) > 1)
				ft_lstdelfirst(&(*src));
			else
			{
				ft_memdel(&((*src)->content));
				(*src)->next = NULL;
				*src = NULL;
			}
			//ft_putstr("Deleting first content of src.\n");
		}
	}
	//ft_putchar('\n');
}

void	ft_pusw_op_r(t_list **lst)
{
	int		size;
	t_list	*tmp_list;
	t_list	*next_link;

	size = ft_lstsize(*lst);
	if (size >= 2)
	{
		tmp_list = ft_lstnew((*lst)->content, (*lst)->content_size);
		ft_memdel(&((*lst)->content));
		*lst = (*lst)->next;
		next_link = *lst;
		while (next_link->next != NULL)
			next_link = next_link->next;
		next_link->next = tmp_list;
		next_link->next->next = NULL;
	}
}

void	ft_pusw_op_rr(t_list **lst)
{
	int		size;
	t_list	*tmp_list;
	t_list	*next_link;

	size = ft_lstsize(*lst);
	if (size >= 2)
	{
		next_link = *lst;
		while (next_link->next != NULL)
			next_link = next_link->next;
		tmp_list = ft_lstnew(next_link->content, next_link->content_size);
		ft_memdel(&(next_link->content));
		free(next_link);
		tmp_list->next = *lst;
		*lst = tmp_list;
	}
}
