/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:08:32 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/19 09:24:39 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == 0)
		return ((char *)&str[i]);
	return (NULL);
}
