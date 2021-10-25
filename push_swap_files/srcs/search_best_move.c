/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_best_move.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:50:41 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/21 20:30:52 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	test_best_move(t_list *a, t_list *b, int place, t_move *m)
{
	int	less_actions;
	int	nb_actions;
	int	i;

	i = 1;
	less_actions = m->t[0](a, b, place);
	while (i < 4)
	{
		nb_actions = m->t[i](a, b, place);
		if (nb_actions < less_actions)
			less_actions = nb_actions;
		i++;
	}
	return (less_actions);
}

int	get_best_move(t_list *a, t_list *b, t_move *m, t_get_move gm)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if (gm.nb_actions == m->t[i](a, b, gm.place))
			return (i);
		i++;
	}
	return (i);
}
