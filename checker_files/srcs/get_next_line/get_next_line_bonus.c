/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 10:53:47 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/04 15:03:49 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	find_new_line(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i])
		return (i);
	else
		return (-1);
}

int	end(int ret, char **str, char **line)
{
	int		newline;

	if (ret == -1)
		return (-1);
	newline = find_new_line(*str);
	if (newline < 0)
	{
		*line = *str;
		*str = NULL;
		return (0);
	}
	else
	{
		*line = ft_substr2(*str, 0, newline, 1);
		*str = ft_substr2(*str, newline + 1, ft_strlen2(*str) - newline, 0);
		return (1);
	}
}

int	fill_buf(char *buf, char **line, char **str, int ret)
{
	int		newline;

	if (ret == -1)
	{
		free(*str);
		return (-1);
	}
	buf[ret] = '\0';
	newline = find_new_line(buf);
	if (newline > -1)
	{
		*str = ft_strjoin2(*str, buf);
		newline = find_new_line(*str);
		*line = ft_substr2(*str, 0, newline, 1);
		*str = ft_substr2(*str, newline + 1, ft_strlen2(*str) - newline, 0);
		return (1);
	}
	*str = ft_strjoin2(*str, buf);
	return (0);
}

int	free_str(int newline, char **str)
{
	if (newline == -1)
	{
		if (*str)
			free(*str);
		return (-1);
	}
	return (newline);
}

int	get_next_line(int fd, char **line)
{
	int				ret;
	char			buf[BUFFER_SIZE + 1];
	static char		*str[1024];
	int				newline;

	if (!line || BUFFER_SIZE <= 0 || read(fd, buf, 0))
		return (-1);
	if (!str[fd])
	{
		str[fd] = malloc(sizeof(char));
		str[fd][0] = '\0';
	}
	ret = read(fd, buf, BUFFER_SIZE);
	while (ret > 0)
	{
		newline = fill_buf(buf, line, &str[fd], ret);
		if (newline == 1 || newline == -1)
			return (free_str(newline, &str[fd]));
		ret = read(fd, buf, BUFFER_SIZE);
	}
	newline = end(ret, &str[fd], line);
	return (free_str(newline, &str[fd]));
}
