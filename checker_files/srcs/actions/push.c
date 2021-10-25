/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 03:56:48 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/03 07:47:08 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
