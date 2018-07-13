/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 17:51:44 by pkumar            #+#    #+#             */
/*   Updated: 2018/04/19 19:30:21 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				num;
	int				isneg;

	i = 0;
	num = 0;
	isneg = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		isneg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
		num = num * 10 + (str[i++] - '0');
	return (num * isneg);
}
