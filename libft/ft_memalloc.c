/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 19:03:02 by pkumar            #+#    #+#             */
/*   Updated: 2018/05/06 19:05:51 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t s)
{
	void *m;

	if (!(m = (void *)malloc(sizeof(void *) * s)))
		return (NULL);
	if (!s)
		return (NULL);
	ft_memset(m, 0, s);
	return (m);
}
