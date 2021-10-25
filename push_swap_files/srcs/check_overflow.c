/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_overflow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:41:58 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/02 17:05:32 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned int	check_overflow(char *s)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (!ft_strncmp("-2147483648", s, ft_strlen(s)))
		return (1);
	if (s[0] == '-')
	{
		i++;
	}
	while (s[i])
	{
		nb = nb * 10 + (s[i] - '0');
		if (nb < 0)
			return (0);
		i++;
	}
	return (1);
}
