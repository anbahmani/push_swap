/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_fct_over_five.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:30:13 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/19 16:20:05 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	place_double_r(t_list **a, t_list **b, int place)
{
	int	r_on_a;
	int	r_on_b;
	int	nb_rr;

	r_on_a = test_r_on_a(*a, place);
	r_on_b = test_r_on_b(*b, place);
	nb_rr = 0;
	if (r_on_a <= r_on_b)
		nb_rr = actions_tool(&r_on_b, &r_on_a);
	else
		nb_rr = actions_tool(&r_on_a, &r_on_b);
	place_rr(a, b, nb_rr);
	place_ra(a, r_on_a);
	place_rb(b, r_on_b);
}

void	place_double_rr(t_list **a, t_list **b, int place)
{
	int	rr_on_a;
	int	rr_on_b;
	int	nb_rrr;

	rr_on_a = test_rr_on_a(*a, place);
	rr_on_b = test_rr_on_b(*b, place);
	nb_rrr = 0;
	if (rr_on_a <= rr_on_b)
		nb_rrr = actions_tool(&rr_on_b, &rr_on_a);
	else
		nb_rrr = actions_tool(&rr_on_a, &rr_on_b);
	place_rrr(a, b, nb_rrr);
	place_rra(a, rr_on_a);
	place_rrb(b, rr_on_b);
}

void	place_r_on_a_rr_on_b(t_list **a, t_list **b, int place)
{
	place_ra(a, test_r_on_a(*a, place));
	place_rrb(b, test_rr_on_b(*b, place));
}

void	place_rr_on_a_r_on_b(t_list **a, t_list **b, int place)
{
	place_rra(a, test_rr_on_a(*a, place));
	place_rb(b, test_r_on_b(*b, place));
}

int	actions_tool(int *big, int *small)
{
	int	res;

	res = 0;
	while ((*small) != 0)
	{
		(*big) = (*big) - 1;
		(*small) = (*small) - 1;
		res++;
	}
	return (res);
}
