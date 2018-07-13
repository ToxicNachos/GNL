/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 15:42:24 by pkumar            #+#    #+#             */
/*   Updated: 2018/04/20 15:42:25 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;

	if (*find == '\0')
		return ((char *)str);
	i = ft_strlen(find);
	while (*str && len-- >= i)
	{
		if (*str == *find && ft_memcmp(str, find, i) == 0)
			return ((char*)str);
		str++;
	}
	return (NULL);
}
