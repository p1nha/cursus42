/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:41:05 by alfrberm          #+#    #+#             */
/*   Updated: 2024/10/14 09:18:00 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_var(va_list args, const char type)
{
	int	size;

	size = 0;
	if (type == 'c')
		size += ft_putchar(va_arg(args, int));
	else if (type == 's')
		size += ft_putstr(va_arg(args, char *));
	else if (type == 'p')
		size += ft_putptr(va_arg(args, void *));
	else if (type == 'd')
		size += ft_putnbr(va_arg(args, int));
	else if (type == 'i')
		size += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		size += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (type == 'x')
		size += ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		size += ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (type == '%')
		size += ft_putchar('%');
	return (size);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		size;

	va_start(args, str);
	i = 0;
	size = 0;
	while (str[i] != 0)
	{
		if (str[i] != '%')
			size += ft_putchar(str[i]);
		else
		{
			size += write_var(args, str[i + 1]);
			i++;
		}
		i++;
	}
	va_end(args);
	return (size);
}
