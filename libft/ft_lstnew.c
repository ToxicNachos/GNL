/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 18:01:10 by pkumar            #+#    #+#             */
/*   Updated: 2018/05/07 18:01:12 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*l;

	if (!(l = (t_list *)malloc(sizeof(*l))))
		return (NULL);
	if (content)
	{
		if (!(l->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(l->content, content, content_size);
		l->content_size = content_size;
	}
	else
	{
		l->content = NULL;
		l->content_size = 0;
	}
	l->next = NULL;
	return (l);
}
