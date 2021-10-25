/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_nb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 22:11:46 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/21 20:49:16 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_nb(t_list **a, t_list **b)
{
	int	size;
	int	to_place;

	size = ft_lstsize(*a);
	to_place = 0;
	while (size > 3)
	{
		push(b, a);
		ft_putstr_fd("pb\n", 1);
		size--;
		to_place++;
	}
	sort_three_nb(a, "a");
	push_two_nb(a, b, to_place);
	sort_again(a);
}

void	push_two_nb(t_list **a, t_list **b, int to_place)
{
	unsigned int	placed;

	placed = to_place;
	while (placed)
	{
		if (test_r_on_a(*a, (*b)->place) <= test_rr_on_a(*a, (*b)->place))
			place_with_r(a, (*b)->place);
		else
			place_with_rr(a, (*b)->place);
		push(a, b);
		ft_putstr_fd("pa\n", 1);
		placed--;
	}
}

void	sort_again(t_list **a)
{
	if ((*a)->place <= ft_lstsize(*a) / 2)
	{
		while ((*a)->place != 0)
		{
			reverse_rotate(a);
			ft_putstr_fd("rra\n", 1);
		}
	}
	else
	{
		while ((*a)->place != 0)
		{
			rotate(a);
			ft_putstr_fd("ra\n", 1);
		}
	}
}
