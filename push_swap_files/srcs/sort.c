/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 18:18:31 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/21 20:34:43 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **a, t_list **b, t_move *m)
{
	int	size;

	size = ft_lstsize(*a);
	if (size < 3)
		sort_two_nb(a, "a");
	else if (size < 4)
		sort_three_nb(a, "a");
	else if (size < 6)
		sort_five_nb(a, b);
	else if (size < 101)
		sort_hundred_nb(a, b, m);
	else
		sort_five_hundred_nb(a, b, m);
}
