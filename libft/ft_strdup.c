/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:03:57 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/19 19:05:26 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
