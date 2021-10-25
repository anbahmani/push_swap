/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_av.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:36:23 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/03 14:55:27 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	**split_av(char **av, int *ac)
{
	char	*tmp1;
	char	*tmp2;
	char	**res;

	tmp1 = ft_strjoin(av[0], " ");
	tmp2 = ft_strjoin(tmp1, av[1]);
	res = ft_split(tmp2, ' ');
	free(tmp1);
	free(tmp2);
	*ac = nb_tab(res) + 1;
	return (res);
}
