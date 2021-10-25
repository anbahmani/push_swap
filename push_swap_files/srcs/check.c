/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 18:04:00 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/24 16:57:07 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned int	check_nb(char *s)
{
	int	i;

	i = 0;
	if (!s || !s[i])
		return (0);
	if (s[i] == '-')
	{
		i++;
		if (!ft_isdigit(s[i]))
			return (0);
	}
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

unsigned int	check_input(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (!check_nb(av[i]) || !check_overflow(av[i]))
			return (0);
		i++;
	}
	if (!check_doublons(av))
		return (0);
	return (1);
}

unsigned int	count_nb(char **av)
{
	int				i;
	unsigned int	count;

	i = 1;
	count = 0;
	while (av[i])
	{
		count++;
		i++;
	}
	return (count);
}

unsigned int	check_doublons(char	**av)
{
	int				i;
	int				*tab;
	unsigned int	in_tab;

	i = 1;
	in_tab = 0;
	tab = malloc(sizeof(int) * count_nb(av));
	if (!tab)
		return (2);
	while (av[i])
	{
		if (!check_tab(in_tab, tab, ft_atoi(av[i])))
		{
			free(tab);
			return (0);
		}
		else
			tab[in_tab] = ft_atoi(av[i]);
		in_tab++;
		i++;
	}
	free(tab);
	return (1);
}

unsigned int	check_tab(unsigned int in_tab, int *tab, int nb)
{
	unsigned int	j;

	j = 0;
	while (j < in_tab)
	{
		if (nb == tab[j])
			return (0);
		j++;
	}
	return (1);
}
