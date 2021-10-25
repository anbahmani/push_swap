/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 20:01:23 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/03 08:40:10 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_fct_tab(t_move *m)
{
	m->move[0] = &place_double_r;
	m->move[1] = &place_double_rr;
	m->move[2] = &place_r_on_a_rr_on_b;
	m->move[3] = &place_rr_on_a_r_on_b;
	m->t[0] = &test_double_r;
	m->t[1] = &test_double_rr;
	m->t[2] = &test_r_on_a_rr_on_b;
	m->t[3] = &test_rr_on_a_r_on_b;
	m->splited = 0;
}

char	**split_av(char **av, int *ac)
{
	char	*tmp1;
	char	*tmp2;
	char	**res;

	tmp1 = ft_strjoin(av[0], " ");
	tmp2 = ft_strjoin(tmp1, av[1]);
	res = ft_split(tmp2, ' ');
	free(tmp1);
	free(tmp2);
	*ac = nb_tab(res) + 1;
	return (res);
}
