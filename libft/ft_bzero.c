/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:31:23 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/28 12:55:04 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*str_ptr;

	i = 0;
	str_ptr = (unsigned char *)str;
	while (i < n)
	{
		str_ptr[i] = 0;
		i++;
	}
}
