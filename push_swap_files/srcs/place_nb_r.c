/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_nb_r.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:28:27 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/12 16:55:11 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	place_ra(t_list **a, int nb_ra)
{
	while (nb_ra)
	{
		rotate(a);
		ft_putstr_fd("ra\n", 1);
		nb_ra--;
	}
}

void	place_rb(t_list **b, int nb_rb)
{
	while (nb_rb)
	{
		rotate(b);
		ft_putstr_fd("rb\n", 1);
		nb_rb--;
	}
}

void	place_rr(t_list **a, t_list **b, int nb_rr)
{
	while (nb_rr)
	{
		rotate_rr(a, b);
		ft_putstr_fd("rr\n", 1);
		nb_rr--;
	}
}
