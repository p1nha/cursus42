/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:39:08 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/19 13:59:42 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	char	*result;

	i = ft_strlen((char *)str);
	while (i > 0)
	{
		if (str[i] == c)
			result = ((char *)&str[i]);
		i--;
	}
	if (c == 0)
		result = ((char *)&str[i]);
	return (0);
}
