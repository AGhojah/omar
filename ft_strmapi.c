/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghujeh <aghujeh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:01:51 by aghujeh           #+#    #+#             */
/*   Updated: 2025/09/11 19:45:12 by aghujeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strmap;
	size_t	i;

	if (!s || !f)
		return (NULL);
	strmap = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!strmap)
		return (NULL);
	i = 0;
	while (s[i])
	{
		strmap[i] = f(i, s[i]);
		i++;
	}
	strmap[i] = '\0';
	return (strmap);
}
