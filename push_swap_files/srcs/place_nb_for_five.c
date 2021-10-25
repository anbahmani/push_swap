/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_nb_for_five.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 20:39:37 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/19 16:20:54 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	place_with_r(t_list	**a, int nb)
{
	int	min;

	min = min_in_lst(*a);
	if (nb < min_in_lst(*a) || nb > max_in_lst(*a))
	{
		while ((*a)->place != min)
		{
			rotate(a);
			ft_putstr_fd("ra\n", 1);
		}
	}
	else
	{
		while (!((*a)->place > nb && last_place(*a) < nb))
		{
			rotate(a);
			ft_putstr_fd("ra\n", 1);
		}
	}
}

void	place_with_rr(t_list **a, int nb)
{
	int	min;

	min = min_in_lst(*a);
	if (nb < min_in_lst(*a) || nb > max_in_lst(*a))
	{
		while ((*a)->place != min)
		{
			reverse_rotate(a);
			ft_putstr_fd("ra\n", 1);
		}
	}
	else
	{
		while (!((*a)->place > nb && last_place(*a) < nb))
		{
			reverse_rotate(a);
			ft_putstr_fd("rra\n", 1);
		}
	}
}
