/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghujeh <aghujeh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:51:35 by aghujeh           #+#    #+#             */
/*   Updated: 2025/09/11 19:46:09 by aghujeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char a)
{
	if (a == ' ' || (a >= '\t' && a <= '\r'))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *ar)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (is_space(ar[i]))
		i++;
	if (ar[i] == '+' || ar[i] == '-')
	{
		if (ar[i] == '-')
			sign = -sign;
		i++;
	}
	while (ar[i] >= '0' && ar[i] <= '9')
	{
		num = num * 10 + (ar[i] - '0');
		i++;
	}
	return (num * sign);
}
