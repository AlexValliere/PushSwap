/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 02:04:37 by alexandre         #+#    #+#             */
/*   Updated: 2013/12/26 00:33:52 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

int		ft_pusw_store_l_a(char const *argv, t_list **l_a);
void	ft_pusw_print_l(t_list *lst);
int		ft_pusw_search_value(char *value, t_list *lst);
int		ft_pusw_get_list_size(t_list *lst);
void	ft_pusw_op_s(t_list **lst);
void	ft_pusw_op_p(t_list **dst, t_list **src);

#endif
