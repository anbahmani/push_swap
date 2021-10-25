/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred_nb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:15:35 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/03 01:22:36 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_nb_to_b(t_list **a, t_list **b, int size)
{
	int		i;
	t_list	*tmp;

	i = 0;
	while (size - i > 3)
	{
		tmp = *a;
		if (tmp->place != 0 && tmp->place != (size - 1)
			&& tmp->place != size / 2)
		{
			push(b, a);
			nb_go_last_bis(tmp->place, size, b);
			i++;
		}
		else
		{
			rotate(a);
			ft_putstr_fd("ra\n", 1);
		}
	}
	sort_three_nb(a, "a");
}

void	add_b_to_a(t_list **a, t_list **b, t_move *m)
{
	while (*b)
		add_nb_to_a(a, b, less_actions_nb(*a, *b, m), m);
}

void	add_nb_to_a(t_list **a, t_list **b, int place, t_move *m)
{
	m->move[m->best_move](a, b, place);
	push(a, b);
	ft_putstr_fd("pa\n", 1);
}

void	sort_hundred_nb(t_list **a, t_list **b, t_move *m)
{
	int	size;
	int	i;

	size = ft_lstsize(*a);
	push_nb_to_b(a, b, size);
	add_b_to_a(a, b, m);
	if ((*a)->place <= size / 2)
		i = 0;
	else
		i = 1;
	while ((*a)->place != 0)
	{
		if (!i)
		{
			reverse_rotate(a);
			ft_putstr_fd("rra\n", 1);
		}
		else
		{
			rotate(a);
			ft_putstr_fd("ra\n", 1);
		}
	}
}
