/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 07:55:20 by alfrberm          #+#    #+#             */
/*   Updated: 2024/10/27 16:21:35 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	if ((unsigned char)c == 0)
		return ((char *)&str[i]);
	return (NULL);
}

char	*ft_strdup(char *src)
{
	char	*string;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != 0)
		i++;
	string = (char *)malloc((i + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	while (src[j] != 0)
	{
		string[j] = src[j];
		j++;
	}
	string[j] = 0;
	return (string);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*result;
	size_t	str_len;

	if (!str)
		return (0);
	str_len = ft_strlen(str);
	if (str_len < start)
		return (ft_strdup(""));
	else if (len > str_len - start)
		len = str_len - start;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, str + start, len + 1);
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		length;
	int		i;
	int		i_result;

	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char *)malloc(length * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	i_result = 0;
		while (s1[i] != 0)
		result[i_result++] = s1[i++];
	i = 0;
	while (s2[i] != 0)
		result[i_result++] = s2[i++];
	result[i_result] = 0;
	return (result);
}
