/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghujeh <aghujeh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:01:32 by aghujeh           #+#    #+#             */
/*   Updated: 2025/09/10 17:01:33 by aghujeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	des_len;
	size_t	src_len;
	size_t	copy_len;
	size_t	i;

	des_len = 0;
	src_len = ft_strlen(src);
	while (des_len < size && dst[des_len])
		des_len++;
	if (des_len == size)
		return (size + src_len);
	copy_len = size - des_len - 1;
	if (copy_len > 0)
	{
		i = 0;
		while (src[i] && i < copy_len)
		{
			dst[des_len + i] = src[i];
			i++;
		}
		dst[des_len + i] = '\0';
	}
	return (des_len + src_len);
}
