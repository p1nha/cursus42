/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:16:55 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/24 17:06:26 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_ptr;

	str_ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		str_ptr[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
