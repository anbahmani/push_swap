/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:39:05 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/19 16:18:25 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**create_lst(char **av, int ac)
{
	int		i;
	t_list	**head;
	int		nb;

	i = 2;
	head = malloc(sizeof(t_list **));
	if (!head)
		return (NULL);
	*head = ft_lstnew(ft_atoi(av[ac - 1]));
	while (i < ac)
	{
		nb = ft_atoi(av[ac - i]);
		ft_lstadd_front(head, ft_lstnew(nb));
		i++;
	}
	return (head);
}
