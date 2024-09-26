/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:26:32 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/26 14:32:33 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	get_word_num(char const *str, char c)
{
	size_t	i;
	size_t	word_num;

	while (str[i != 0])
	{
		if (str[i] == c)
			i++;
		else
		{
			word_num++;
			while (str[i] != 0 && str[i] != c)
				i++;
		}
	}
	return (word_cnt);
}

char	**free_all(char **str, size_t i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	size_t	i;
	size_t	len;
	char	**words;

	words = (char **)malloc(get_word_num(str, c) * sizeof(char *))
	if (words == NULL)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			i++;
		else
		{
			len = 0;
			while (str[i + len] != 0 && str[i + len] != c)
				len++;
			word[i] = ft_substr(s, 0, len);
			if (!word[i])
				return (free_all(words, i));
		}
	}
}
