/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_place.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:01:11 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/19 16:15:53 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*next_without_place(t_list *first)
{
	t_list	*curr;

	curr = first;
	while (curr)
	{
		if (curr->place == -1)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}

void	add_place(t_list **first)
{
	unsigned int	n;
	unsigned int	i;
	t_list			*curr;
	t_list			*min;

	n = ft_lstsize(*first);
	i = 0;
	while (i < n)
	{
		curr = next_without_place(*first);
		min = curr;
		while (curr)
		{
			if (curr->content < min->content && curr->place == -1)
				min = curr;
			curr = curr->next;
		}
		min->place = i;
		i++;
	}
}
