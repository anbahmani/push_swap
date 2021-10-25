/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_overflow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 04:17:45 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/03 04:18:01 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
