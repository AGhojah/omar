/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghujeh <aghujeh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:59:15 by aghujeh           #+#    #+#             */
/*   Updated: 2025/09/11 19:45:12 by aghujeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(int n)
{
	int	length;

	length = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

static void	fill_number(char *str, int n, int len, int sign)
{
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	else
	{
		str[len] = '\0';
		if (sign == -1)
			str[0] = '-';
		while (n > 0)
		{
			str[len - 1] = (n % 10) + '0';
			n /= 10;
			len--;
		}
	}
}

char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	char	*str;

	sign = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = -n;
		sign = -1;
	}
	len = get_length(n);
	if (sign == -1)
		len++;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	fill_number(str, n, len, sign);
	return (str);
}
