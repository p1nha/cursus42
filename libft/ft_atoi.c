/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:50:15 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/19 17:41:35 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_sign(char *str, int *j)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*j = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = get_sign(str, i);
	if (str[i] != 0 && (str[i] >= '0' && str[i] <= '9'))
	{
		result = str[i] - 48;
		i++;
	}
	while (str[i] != 0 && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
