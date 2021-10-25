/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_nb_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:28:31 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/23 13:10:04 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	place_rra(t_list **a, int nb_rra)
{
	while (nb_rra)
	{
		reverse_rotate(a);
		ft_putstr_fd("rra\n", 1);
		nb_rra--;
	}
}

void	place_rrb(t_list **b, int nb_rrb)
{
	while (nb_rrb)
	{
		reverse_rotate(b);
		ft_putstr_fd("rrb\n", 1);
		nb_rrb--;
	}
}

void	place_rrr(t_list **a, t_list **b, int nb_rrr)
{
	while (nb_rrr)
	{
		reverse_rotate_rrr(a, b);
		ft_putstr_fd("rrr\n", 1);
		nb_rrr--;
	}
}	
