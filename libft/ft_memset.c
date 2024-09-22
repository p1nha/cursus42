/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:16:55 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/19 21:41:06 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_char;

	str_char = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		str_char[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
