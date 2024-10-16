/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:27:59 by alfrberm          #+#    #+#             */
/*   Updated: 2024/10/08 08:22:31 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int				size;
	unsigned long	address;

	if (!ptr)
		return (ft_putstr("(nil)"));
	size = ft_putstr("0x");
	address = (unsigned long)ptr;
	size += ft_putnbr_base(address, "0123456789abcdef");
	return (size);
}
