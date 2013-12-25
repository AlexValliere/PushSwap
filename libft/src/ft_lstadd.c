/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 16:06:24 by apetit            #+#    #+#             */
/*   Updated: 2013/12/25 16:40:39 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*tmp_list;

	ft_putstr("Call ft_lstadd\n");
	if (*alst && new)
	{
		ft_putstr("List not empty.\n");
		tmp_list = *alst;
		*alst = new;
		(*alst)->next = tmp_list;
	}
	else if (new)
	{
		ft_putstr("Creating new list.\n");
		*alst = ft_lstnew(new->content, new->content_size);
	}
	else
		ft_putstr("Que pasa ?\n");
}
