/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:19:31 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/24 17:34:43 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*buffer;

	buffer = (void)malloc(size * nmeb);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, size * nmeb);
	return (buffer);
}
