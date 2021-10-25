/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_nb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:58:33 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/21 20:58:03 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_var(int *n1, int *n2)
{
	int	tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

int	*sort_array(int first, int second, int third)
{
	int	*t;
	int	i;
	int	j;

	t = malloc(sizeof(int) * 3);
	i = -1;
	if (!t)
		return (NULL);
	t[0] = first;
	t[1] = second;
	t[2] = third;
	while (++i < 2)
	{
		j = -1;
		while (++j < 2 - i)
		{
			if (t[j] > t[j + 1])
				swap_var(&t[j], &t[j + 1]);
		}
	}
	return (t);
}

void	sort_three_nb(t_list **head, char *stack_name)
{
	int	*t;
	int	first;
	int	second;
	int	third;

	first = (*head)->place;
	second = (*head)->next->place;
	third = (*head)->next->next->place;
	t = sort_array(first, second, third);
	if (first == t[1] && second == t[0] && third == t[2])
		one_swap(head, stack_name);
	else if (first == t[2] && second == t[1] && third == t[0])
		swap_and_reverse_rotate(head, stack_name);
	else if (first == t[2] && second == t[0] && third == t[1])
		one_rotate(head, stack_name);
	else if (first == t[0] && second == t[2] && third == t[1])
		swap_and_rotate(head, stack_name);
	else if (first == t[1] && second == t[2] && third == t[0])
		one_reverse_rotate(head, stack_name);
	free(t);
}
