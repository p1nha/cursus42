/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:57:47 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/27 16:14:58 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
