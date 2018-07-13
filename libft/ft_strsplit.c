/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 18:30:39 by pkumar            #+#    #+#             */
/*   Updated: 2018/05/07 18:30:41 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *str, char c)
{
	int i;
	int w;

	i = 0;
	w = 0;
	while (*str != '\0')
	{
		if (i == 1 && *str == c)
			i = 0;
		if (i == 0 && *str != c)
		{
			i = 1;
			w++;
		}
		str++;
	}
	return (w);
}

static int	ft_strclen(char *str, char c)
{
	int	i;

	i = 0;
	while (*str != '\0' && *str != c)
	{
		i++;
		str++;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		nw;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	nw = ft_count_words((char *)s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (nw + 1))))
		return (NULL);
	while (nw--)
	{
		while (*s == c && *s != '\0')
			s++;
		res[i] = ft_strsub((char *)s, 0, ft_strclen((char *)s, c));
		if (res[i] == NULL)
			return (res);
		s = s + ft_strclen((char *)s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
