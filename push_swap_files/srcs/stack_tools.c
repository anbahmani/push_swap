/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:24:45 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/21 20:59:29 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	last_place(t_list *head)
{
	t_list	*last;

	last = ft_lstlast(head);
	return (last->place);
}

int	*copy_lst_in_tab(t_list *head)
{
	int		*tab;
	t_list	*curr;
	int		i;

	curr = head;
	tab = malloc(sizeof(int) * ft_lstsize(head));
	if (!tab)
		return (NULL);
	i = 0;
	while (curr)
	{
		tab[i] = curr->place;
		i++;
		curr = curr->next;
	}
	return (tab);
}

int	max_in_lst(t_list *head)
{
	int		max;
	t_list	*curr;

	max = head->place;
	curr = head->next;
	while (curr)
	{
		if (curr->place > max)
			max = curr->place;
		curr = curr->next;
	}
	return (max);
}

int	min_in_lst(t_list *head)
{
	int		min;
	t_list	*curr;

	min = head->place;
	curr = head->next;
	while (curr)
	{
		if (curr->place < min)
			min = curr->place;
		curr = curr->next;
	}
	return (min);
}

int	less_actions_nb(t_list *a, t_list *b, t_move *m)
{
	int			curr_nb_actions;
	t_list		*curr;
	t_get_move	gm;

	gm.nb_actions = test_best_move(a, b, b->place, m);
	gm.place = b->place;
	curr = b->next;
	while (curr)
	{
		curr_nb_actions = test_best_move(a, b, curr->place, m);
		if (curr_nb_actions < gm.nb_actions)
		{
			gm.nb_actions = curr_nb_actions;
			gm.place = curr->place;
		}
		curr = curr->next;
	}
	m->best_move = get_best_move(a, b, m, gm);
	return (gm.place);
}
