/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghujeh <aghujeh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:00:42 by aghujeh           #+#    #+#             */
/*   Updated: 2025/09/11 19:45:12 by aghujeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count(const char *s, char c)
{
	int	count;
	int	swt;
	int	i;

	count = 0;
	i = 0;
	swt = 0;
	while (s[i])
	{
		if (s[i] != c && swt == 0)
		{
			swt = 1;
			count++;
		}
		else if (s[i] == c)
			swt = 0;
		i++;
	}
	return (count);
}

static int	word_length(const char *s, char c)
{
	int	length;

	length = 0;
	while (s[length] && s[length] != c)
		length++;
	return (length);
}

static void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static int	add_word(char **split, int i, const char *s, int len)
{
	split[i] = ft_substr(s, 0, len);
	if (!split[i])
	{
		free_split(split);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		word_i;
	int		word_len;

	if (!s)
		return (NULL);
	word_i = 0;
	split = (char **)malloc((words_count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[words_count(s, c)] = NULL;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			word_len = word_length(s, c);
			if (!add_word(split, word_i++, s, word_len))
				return (NULL);
			s += word_len;
		}
	}
	return (split);
}
