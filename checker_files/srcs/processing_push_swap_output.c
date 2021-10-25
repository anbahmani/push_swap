/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processing_push_swap_output.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 06:19:07 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/03 17:00:43 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	process_rotate_or_reverse(char **line, t_list **a, t_list **b)
{
	unsigned int	len;

	len = ft_strlen(*line);
	if (!ft_strncmp(*line, "ra", len))
		rotate(a);
	else if (!ft_strncmp(*line, "rb", len))
		rotate(b);
	else if (!ft_strncmp(*line, "rr", len))
		rotate_rr(a, b);
	else if (!ft_strncmp(*line, "rra", len))
		reverse_rotate(a);
	else if (!ft_strncmp(*line, "rrb", len))
		reverse_rotate(b);
	else if (!ft_strncmp(*line, "rrr", len))
		reverse_rotate_rrr(a, b);
	else
		return (0);
	return (1);
}

int	process_swap(char **line, t_list **a, t_list **b)
{
	unsigned int	len;

	len = ft_strlen(*line);
	if (!ft_strncmp(*line, "sa", len))
		swap(a);
	else if (!ft_strncmp(*line, "sb", len))
		swap(b);
	else if (!ft_strncmp(*line, "ss", len))
		swap_ss(a, b);
	else
		return (0);
	return (1);
}

int	process_push(char **line, t_list **a, t_list **b)
{
	unsigned int	len;

	len = ft_strlen(*line);
	if (!ft_strncmp(*line, "pa", len))
		push(a, b);
	else if (!ft_strncmp(*line, "pb", len))
		push(b, a);
	else
		return (0);
	return (1);
}

int	process_push_swap_output(char **line, t_list **a, t_list **b)
{
	if (*line[0] == 'r')
		return (process_rotate_or_reverse(line, a, b));
	else if (*line[0] == 's')
		return (process_swap(line, a, b));
	else if (*line[0] == 'p')
		return (process_push(line, a, b));
	return (0);
}

int	get_actions(t_list **a, t_list **b)
{
	int		ret;
	char	**line;

	line = malloc(sizeof(char *));
	if (!line)
		return (0);
	ret = get_next_line(0, line);
	while (ret != 0)
	{
		if (!process_push_swap_output(line, a, b) || ret == -1)
		{
			write(2, "Error\n", 6);
			free(*line);
			free(line);
			return (0);
		}
		free(*line);
		ret = get_next_line(0, line);
	}
	free(line);
	return (1);
}
