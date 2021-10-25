/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_three_nb_sort.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:54:47 by abahmani          #+#    #+#             */
/*   Updated: 2021/09/21 20:57:12 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	one_swap(t_list **head, char *stack_name)
{
	char	*action;

	action = ft_strjoin("s", stack_name);
	swap(head);
	ft_putstr_fd(action, 1);
	ft_putchar_fd('\n', 1);
	free(action);
}

void	swap_and_reverse_rotate(t_list **head, char *stack_name)
{
	char	*action;

	action = ft_strjoin("s", stack_name);
	swap(head);
	reverse_rotate(head);
	ft_putstr_fd(action, 1);
	ft_putchar_fd('\n', 1);
	free(action);
	action = ft_strjoin("rr", stack_name);
	ft_putstr_fd(action, 1);
	ft_putchar_fd('\n', 1);
	free(action);
}

void	one_rotate(t_list **head, char *stack_name)
{
	char	*action;

	action = ft_strjoin("r", stack_name);
	rotate(head);
	ft_putstr_fd(action, 1);
	ft_putchar_fd('\n', 1);
	free(action);
}

void	swap_and_rotate(t_list **head, char *stack_name)
{
	char	*action;

	action = ft_strjoin("s", stack_name);
	swap(head);
	rotate(head);
	ft_putstr_fd(action, 1);
	ft_putchar_fd('\n', 1);
	free(action);
	action = ft_strjoin("r", stack_name);
	ft_putstr_fd(action, 1);
	ft_putchar_fd('\n', 1);
	free(action);
}

void	one_reverse_rotate(t_list **head, char *stack_name)
{
	char	*action;

	action = ft_strjoin("rr", stack_name);
	reverse_rotate(head);
	ft_putstr_fd(action, 1);
	ft_putchar_fd('\n', 1);
	free(action);
}
