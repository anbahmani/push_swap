/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:50:49 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/19 16:01:57 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **head)
{
	t_list	*tmp;
	t_list	*prec;

	if (ft_lstsize(*head) < 2)
		return ;
	tmp = *head;
	prec = *head;
	while (prec->next)
		prec = prec->next;
	prec->next = tmp;
	*head = (*head)->next;
	tmp->next = NULL;
}

void	rotate_rr(t_list **head1, t_list **head2)
{
	rotate(head1);
	rotate(head2);
}
