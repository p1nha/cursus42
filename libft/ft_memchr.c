/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:30:40 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/23 16:54:01 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_ptr;

	i = 0;
	str_ptr = (unsigned char *)str;
	while (i < n)
	{
		if (str_ptr[i] == (unsigned char)c)
			return (&str_ptr[i]);
		i++;
	}
	return (NULL);
}
