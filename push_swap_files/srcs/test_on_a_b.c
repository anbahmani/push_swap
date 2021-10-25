/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_on_a_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:49:39 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/21 21:01:43 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	test_double_r(t_list *a, t_list *b, int place)
{
	int	test_a;
	int	test_b;

	test_a = test_r_on_a(a, place);
	test_b = test_r_on_b(b, place);
	if (test_a >= test_b)
		return (test_a);
	return (test_b);
}

int	test_double_rr(t_list *a, t_list *b, int place)
{
	int	test_a;
	int	test_b;

	test_a = test_rr_on_a(a, place);
	test_b = test_rr_on_b(b, place);
	if (test_a >= test_b)
		return (test_a);
	return (test_b);
}

int	test_r_on_a_rr_on_b(t_list *a, t_list *b, int place)
{
	int	test_a;
	int	test_b;

	test_a = test_r_on_a(a, place);
	test_b = test_rr_on_b(b, place);
	return (test_a + test_b);
}

int	test_rr_on_a_r_on_b(t_list *a, t_list *b, int place)
{
	int	test_a;
	int	test_b;

	test_a = test_rr_on_a(a, place);
	test_b = test_r_on_b(b, place);
	return (test_a + test_b);
}
