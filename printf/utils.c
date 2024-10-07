/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:10:01 by alfrberm          #+#    #+#             */
/*   Updated: 2024/10/07 16:13:13 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;

	if (!str)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i] != 0)
		ft_putchar(str[i++]);
	return (i);
}

int	ft_putnbr(int nb)
{
	char	nb_char;
	int		size;

	size = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		size = ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	nb_char = nb % 10 + '0';
	size += ft_putchar(nb_char);
	return (size);
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	char	nb_char;
	int		size;

	size = 0;
	if (nb > 9)
		ft_putnbr_unsigned(nb / 10);
	nb_char = nb % 10 + '0';
	size += ft_putchar(nb_char);
	return (size);
}

int	ft_putnbr_base(int nb, const char *base)
{
	int	nb_char;
	int	base_len;
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (base[i] != 0)
		i++;
	base_len = i;
	if (nb < 0)
	{
		size = ft_putchar('-');
		nb = -nb;
	}
	if (nb > base_len - 1)
		ft_putnbr_base(nb / base_len, base);
	nb_char = base[nb % base_len];
	size += ft_putchar(nb_char);
	return (size);
}
