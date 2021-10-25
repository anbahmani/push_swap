/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 15:59:17 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/15 15:22:08 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sort_two_nb(t_list **head, char *stack_name)
{
	char	*action;

	action = ft_strjoin("s", stack_name);
	if ((*head)->content > (*head)->next->content)
	{
		swap(head);
		ft_putstr_fd(action, 1);
		ft_putchar_fd('\n', 1);
	}
	free(action);
}
