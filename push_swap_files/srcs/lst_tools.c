/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:17:02 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/03 15:45:25 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned int	is_sorted(t_list *head)
{
	t_list	*curr;
	t_list	*prec;

	curr = head->next;
	prec = head;
	while (curr)
	{
		if (prec->content > curr->content)
			return (0);
		curr = curr->next;
		prec = prec->next;
	}
	return (1);
}

void	clean_lst(t_list **h)
{
	t_list	*tmp;

	tmp = *h;
	while (*h)
	{
		(*h) = (*h)->next;
		free(tmp);
		tmp = *h;
	}
	free(h);
}

void	free_av(char **av, int ac)
{
	int	i;

	i = 0;
	while (ac > i)
	{
		free(av[i]);
		i++;
	}
	free(av);
}

int	nb_tab(char **av)
{
	int	nb;

	nb = 0;
	while (av[nb + 1])
		nb++;
	return (nb);
}
