/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 02:19:24 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/25 22:58:53 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_is_int(char const *str)
{
	int		nbr;
	char	*tmp;
	int		is_int;

	nbr = ft_atoi(str);
	tmp = ft_itoa(nbr);
	ft_printf("nbr = %d - tmp = %s\n", nbr, tmp);
	if (ft_strcmp(tmp, str) == 0)
		is_int = 1;
	else
		is_int = 0;
	return (is_int);
}
