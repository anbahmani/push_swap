/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:12:23 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/28 19:33:30 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	quit_success(int ac, char **av, t_list **a, int splited)
{
	if (a)
		clean_lst(a);
	if (splited)
		free_av(av, ac);
	exit(0);
}

int	quit_failure(int ac, char **av, t_list **a, int splited)
{
	if (a)
		clean_lst(a);
	if (splited)
		free_av(av, ac);
	write(2, "Error\n", 6);
	exit(1);
}

int	main(int ac, char **av)
{
	t_list	**a;
	t_list	*b;
	int		splited;

	splited = 0;
	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	if (ac == 2)
	{
		av = split_av(av, &ac);
		splited = 1;
	}
	if (ac < 1 || !av[1] | !check_input(av))
		quit_failure(ac, av, a, splited);
	a = create_lst(av, ac);
	if (!get_actions(a, &b))
		quit_failure(ac, av, a, splited);
	if (is_sorted(*a) && !b)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	quit_success(ac, av, a, splited);
}
