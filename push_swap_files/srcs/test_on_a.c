/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_on_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:47:13 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/03 00:55:33 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	test_r_on_a_max_min(int *t, int min)
{
	int	cmp;

	cmp = 0;
	while (t[cmp] != min)
		cmp++;
	return (cmp);
}

int	test_rr_on_a_max_min(int *t, int max, int size)
{
	int	cmp;
	int	i;

	cmp = 0;
	i = size - 1;
	while (t[i] != max)
	{
		cmp++;
		i--;
	}
	return (cmp);
}

int	test_r_on_a(t_list *a, int nb)
{
	int	cmp;
	int	*t;

	t = copy_lst_in_tab(a);
	cmp = 0;
	if (nb > max_in_lst(a) || nb < min_in_lst(a))
	{
		cmp = test_r_on_a_max_min(t, min_in_lst(a));
		free(t);
		return (cmp);
	}
	else if (t[cmp] > nb && t[ft_lstsize(a) - 1] < nb)
	{
		free(t);
		return (0);
	}
	cmp++;
	while (!(t[cmp] > nb && t[cmp - 1] < nb))
		cmp++;
	free(t);
	return (cmp);
}

int	test_rr_on_a(t_list *a, int nb)
{
	int	cmp;
	int	*t;
	int	size;
	int	i;

	t = copy_lst_in_tab(a);
	cmp = 0;
	size = ft_lstsize(a);
	i = size - 1;
	if (nb > max_in_lst(a) || nb < min_in_lst(a))
		cmp = test_rr_on_a_max_min(t, max_in_lst(a), size);
	else if (t[cmp] > nb && t[i] < nb)
	{
		free(t);
		return (0);
	}
	cmp++;
	while (i > 0 && !(t[i] > nb && t[i - 1] < nb))
	{
		cmp++;
		i--;
	}
	free(t);
	return (cmp);
}
