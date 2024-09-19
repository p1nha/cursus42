/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:08:15 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/19 19:03:31 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) = 0)
		return (big);
	while (big[i] != 0 && i < len)
	{
		if (big[i] == little[0])
		{
			while (big[i] == little[j])
			{
				i++;
				j++;
			}
		}
	}
	if (j == len - 1)
		return (&big[i - j]);
	return (0);
}
