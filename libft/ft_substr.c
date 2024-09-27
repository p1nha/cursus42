/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:59:03 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/27 16:36:20 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*result;
	size_t	str_len;

	str_len = ft_strlen(str);
	if (!str)
		return (0);
	if (str_len < start)
		len = 0;
	else if (len > str_len - start)
		len = str_len - start;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, str + start, len + 1);
	return (result);
}
