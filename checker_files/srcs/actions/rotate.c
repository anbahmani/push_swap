/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 03:56:02 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/03 07:47:13 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
