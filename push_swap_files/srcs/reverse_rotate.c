/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:50:46 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/21 20:30:31 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **head)
{
	t_list	*tmp;
	t_list	*prec;

	if (ft_lstsize(*head) < 2)
		return ;
	tmp = *head;
	while (tmp->next)
	{
		prec = tmp;
		tmp = tmp->next;
	}
	prec->next = NULL;
	tmp->next = *head;
	*head = tmp;
}

void	reverse_rotate_rrr(t_list **head1, t_list **head2)
{
	reverse_rotate(head1);
	reverse_rotate(head2);
}
