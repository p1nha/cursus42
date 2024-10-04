/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:10:01 by alfrberm          #+#    #+#             */
/*   Updated: 2024/10/04 13:03:53 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
		ft_putchar(str[i++]);
	return (i);
}

int	ft_putnbr(int nb)
{
	char	nb_char;
	int	size;

	size = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		size = putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10, 1);
	nb_char = nb % 10 + '0';
	size = putchar(nb_char);
	return (size);
}

