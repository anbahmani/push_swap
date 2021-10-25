/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 07:22:30 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/04 15:00:50 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen2(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

static char	*ft_malloc(unsigned int start, size_t len, size_t size)
{
	char	*ptr;

	if (size > start)
	{
		if ((size_t)(size - start + 1) < len)
			ptr = malloc((size - start + 1) * sizeof(char));
		else
			ptr = malloc((len + 1) * sizeof(char));
	}
	else
		ptr = malloc(sizeof(char));
	if (!ptr)
		return (NULL);
	return (ptr);
}

char	*ft_substr2(char *s, unsigned int start, size_t len, int f)
{
	size_t	size;
	size_t	i;
	char	*ptr;

	size = ft_strlen2(s);
	i = 0;
	if (!s)
		return (0);
	ptr = ft_malloc(start, len, size);
	if (!ptr)
		return (NULL);
	while (start + i < size && s[start + i] && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	if (!f)
		free(s);
	return (ptr);
}

static	char	*concat(char const *src, char *dest, size_t start)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[start + i] = src[i];
		i++;
	}
	dest[start + i] = '\0';
	return (dest);
}

char	*ft_strjoin2(char *s1, char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*str;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen2(s1);
	s2_len = ft_strlen2(s2);
	str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (NULL);
	str = concat(s2, concat(s1, str, 0), s1_len);
	if (s1)
		free(s1);
	return (str);
}
