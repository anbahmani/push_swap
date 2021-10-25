/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 03:56:12 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/03 07:47:20 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	swap(t_list	**head)
{
	t_list	*tmp;

	if (ft_lstsize(*head) < 2)
		return ;
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = *head;
	*head = tmp;
}

void	swap_ss(t_list **head1, t_list **head2)
{
	swap(head1);
	swap(head2);
}
