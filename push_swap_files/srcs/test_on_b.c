/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_on_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:48:46 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/27 21:21:31 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	test_r_on_b(t_list *b, int place)
{
	int	cmp;
	int	*t;

	cmp = 0;
	t = copy_lst_in_tab(b);
	while (t[cmp] != place)
	{
		cmp++;
	}
	free(t);
	return (cmp);
}

int	test_rr_on_b(t_list *b, int place)
{
	int	cmp;
	int	*t;
	int	i;

	cmp = 1;
	if (b->place == place)
		return (0);
	t = copy_lst_in_tab(b);
	i = ft_lstsize(b) - 1;
	while (t[i] != place)
	{
		cmp++;
		i--;
	}
	free(t);
	return (cmp);
}
