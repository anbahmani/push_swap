/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:47:30 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/24 22:18:21 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	quit_success(int ac, char **av, t_list **a, t_move m)
{
	if (a)
		clean_lst(a);
	if (m.splited)
		free_av(av, ac);
	exit(0);
}

int	quit_failure(int ac, char **av, t_list **a, t_move m)
{
	if (a)
		clean_lst(a);
	if (m.splited)
		free_av(av, ac);
	write(2, "Error\n", 6);
	exit(1);
}

int	main(int ac, char **av)
{
	t_list	**a;
	t_list	*b;
	t_move	m;

	b = NULL;
	a = NULL;
	init_fct_tab(&m);
	if (ac < 2)
		return (0);
	if (ac == 2)
	{
		av = split_av(av, &ac);
		m.splited = 1;
	}
	if (ac < 1 || !av[1] || !check_input(av))
		quit_failure(ac, av, a, m);
	a = create_lst(av, ac);
	add_place(a);
	if (is_sorted(*a))
		quit_success(ac, av, a, m);
	sort(a, &b, &m);
	quit_success(ac, av, a, m);
	return (0);
}
