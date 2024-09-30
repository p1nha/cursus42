/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:19:31 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/29 11:44:59 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*buffer;

	if (nmeb != 0 && size > SIZE_MAX / nmeb)
		return (NULL);
	buffer = (void *)malloc(size * nmeb);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, size * nmeb);
	return (buffer);
}
