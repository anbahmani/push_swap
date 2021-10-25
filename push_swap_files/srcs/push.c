/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:50:55 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/19 16:01:46 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **head1, t_list **head2)
{
	t_list	*tmp;

	if (ft_lstsize(*head2) == 0)
		return ;
	tmp = *head2;
	*head2 = (*head2)->next;
	tmp->next = *head1;
	*head1 = tmp;
}
