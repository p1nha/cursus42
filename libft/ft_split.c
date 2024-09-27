/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:26:32 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/27 16:35:44 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_word_num(char const *str, char c)
{
	size_t	i;
	size_t	word_num;

	i = 0;
	word_num = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			word_num++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (word_num);
}

char	**free_all(char **str, size_t i)
{
	while (i > 0)
	{
		free(str[i - 1]);
		i--;
	}
	free(str);
	return (NULL);
}

static char	**allocate_words(const char *str, char c)
{
	char	**words;

	words = (char **)malloc(sizeof(char *) * (get_word_num(str, c) + 1));
	if (!words)
		return (NULL);
	return (words);
}

static int	fill_words(char **words, const char *str, char c)
{
	size_t	i;
	size_t	len;
	size_t	word_index;

	i = 0;
	word_index = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			len = 0;
			while (str[i + len] && str[i + len] != c)
				len++;
			words[word_index] = ft_substr(str, i, len);
			if (!words[word_index])
				return (free_all(words, word_index), 0);
			word_index++;
			i += len;
		}
	}
	words[word_index] = NULL;
	return (1);
}

char	**ft_split(char const *str, char c)
{
	char	**words;

	if (!str)
		return (NULL);
	words = allocate_words(str, c);
	if (!words)
		return (NULL);
	if (!fill_words(words, str, c))
		return (NULL);
	return (words);
}
