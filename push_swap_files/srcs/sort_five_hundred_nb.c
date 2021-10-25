/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_hundred_nb.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:57:41 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/22 13:01:42 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	first_push_to_b(t_list **a, t_list **b, int size)
{
	int		i;
	t_list	*tmp;

	i = 0;
	while (size - i > (size / 2) + 3)
	{
		tmp = *a;
		if (tmp->place != 0 && tmp->place != (size - 1)
			&& tmp->place != size / 2 && (tmp->place < size / 4
				|| tmp->place > ((size / 4) * 3)))
		{
			push(b, a);
			ft_putstr_fd("pb\n", 1);
			i++;
			nb_go_last(tmp->place, size, b);
		}
		else
		{
			rotate(a);
			ft_putstr_fd("ra\n", 1);
		}
	}
}

void	nb_go_last(int place, int size, t_list **b)
{
	if (place > ((size / 4) * 3) && (*b)->next
		&& (*b)->next->place < size / 4)
	{
		rotate(b);
		ft_putstr_fd("rb\n", 1);
	}
}

void	second_push_to_b(t_list **a, t_list **b, int size)
{
	int		i;
	t_list	*tmp;

	i = ft_lstsize(*a);
	while (i > 5)
	{
		tmp = *a;
		if (tmp->place != 0 && tmp->place != (size - 1)
			&& tmp->place != size / 2 && tmp->place != (size / 4)
			&& tmp->place != ((size / 4) * 3))
		{
			push(b, a);
			nb_go_last_bis(tmp->place, size, b);
			i--;
		}
		else
		{
			rotate(a);
			ft_putstr_fd("ra\n", 1);
		}
	}
}

void	nb_go_last_bis(int place, int size, t_list **b)
{
	ft_putstr_fd("pb\n", 1);
	if (place > size / 2 && (*b)->next && (*b)->next->place < size / 2)
	{
		rotate(b);
		ft_putstr_fd("rb\n", 1);
	}
}

void	sort_five_hundred_nb(t_list **a, t_list **b, t_move *m)
{
	int	size;
	int	i;

	size = ft_lstsize(*a);
	first_push_to_b(a, b, size);
	second_push_to_b(a, b, size);
	sort_five_nb(a, b);
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
