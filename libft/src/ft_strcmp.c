/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 15:33:29 by apetit            #+#    #+#             */
/*   Updated: 2013/12/01 21:12:05 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] == s2[index]) && s1[index] != '\0' && s2[index] != '\0')
		index = index + 1;
	return (s1[index] - s2[index]);
}
