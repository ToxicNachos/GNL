/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 00:08:18 by pkumar            #+#    #+#             */
/*   Updated: 2018/05/06 18:22:46 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned int		i;
	unsigned char		*dst;
	const unsigned char	*src;
	unsigned char		x;

	dst = (unsigned char *)s1;
	src = (const unsigned char *)s2;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if ((*dst++ = *src++) == x)
			return (dst);
		i++;
	}
	return (NULL);
}
