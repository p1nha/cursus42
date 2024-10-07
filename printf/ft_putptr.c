/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:27:59 by alfrberm          #+#    #+#             */
/*   Updated: 2024/10/07 16:35:42 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int		size;
	char	*hex;

	hex = "0123456789abcdef";
	size = ft_putstr("0x");
	if (ptr == 0)
		return (size + ft_putchar('0'));
	if (ptr > 15)
		size += ft_putptr(ptr / 16);
	size += ft_putchar(hex[ptr % 16]);
	return (size);
}
