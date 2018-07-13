/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:00:50 by pkumar            #+#    #+#             */
/*   Updated: 2018/07/09 10:00:53 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_read_fd(int const fd, char **string)
{
	char		buf[BUFF_SIZE + 1];
	int			i;
	char		*tmp;

	i = read(fd, buf, BUFF_SIZE);
	if (i > 0)
	{
		buf[i] = '\0';
		tmp = ft_strjoin(*string, buf);
		if (!tmp)
			return (-1);
		free(*string);
		*string = tmp;
	}
	return (i);
}

int			get_next_line(int const fd, char **line)
{
	GNL_MACRO;
	if (!string && (string = (char *)ft_memalloc(sizeof(char))) == NULL)
		return (-1);
	ch = ft_strchr(string, '\n');
	while (ch == NULL)
	{
		ret = ft_read_fd(fd, &string);
		if (ret == 0)
		{
			if ((ch = ft_strchr(string, '\0')) == string)
				return (0);
		}
		else if (ret < 0)
			return (-1);
		else
			ch = ft_strchr(string, '\n');
	}
	if (!(*line = ft_strsub(string, 0, ch - string)))
		return (-1);
	ch = ft_strdup(ch + 1);
	free(string);
	string = ch;
	return (1);
}
