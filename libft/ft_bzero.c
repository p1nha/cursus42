/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:31:23 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/19 21:42:54 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	bzero(void *str, size_t n)
{
	size_t	i;
	unsigned char *str_char = (unsigned char *)str;

	i = 0;
	while (i < n)
	{
		str_char[i] = 0;
		i++;
	}
}
