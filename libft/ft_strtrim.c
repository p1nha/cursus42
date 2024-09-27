/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:27:58 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/27 16:36:54 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	to_trim(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i] != 0)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*get_result(char const *s1, size_t start, size_t len)
{
	char	*result;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result != 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = 0;
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (to_trim(set, s1[i]) != 0)
		i++;
	j = ft_strlen(s1) - 1;
	while (to_trim(set, s1[i]) != 0)
		j--;
	return (get_result(s1, i, j - (i - 1)));
}
