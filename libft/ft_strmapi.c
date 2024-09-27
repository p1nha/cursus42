/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 08:31:53 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/27 16:36:06 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!str || !f)
		return (NULL);
	result = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		result[i] = (*f)(i, str[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}
