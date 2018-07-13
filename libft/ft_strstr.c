/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 15:36:12 by pkumar            #+#    #+#             */
/*   Updated: 2018/04/20 15:36:13 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int	pos;
	int	len;

	i = 0;
	pos = 0;
	len = 0;
	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return ((char *)str);
	while (str[i])
	{
		while (to_find[pos] == str[i + pos])
		{
			if (pos == len - 1)
				return ((char *)str + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}
