/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:33:35 by alfrberm          #+#    #+#             */
/*   Updated: 2024/12/18 00:04:02 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*clear_temp(char *temp)
{
	char	*new_temp;
	int		i;
	int		j;

	i = 0;
	while (temp[i] && temp[i] != '\n')
		i++;
	if (!temp[i])
		return (free(temp), temp = NULL, NULL);
	new_temp = (char *)malloc((ft_strlen(temp) - i + 1) * sizeof(char));
	if (!new_temp)
		return (free(temp), temp = NULL, NULL);
	i++;
	j = 0;
	while (temp[i])
		new_temp[j++] = temp[i++];
	new_temp[j] = '\0';
	free(temp);
	return (new_temp);
}

static char	*get_line(char *temp)
{
	char	*line;
	int		i;

	i = 0;
	while (temp[i] != 0 && temp[i] != '\n')
		i++;
	if (temp[i] == '\n')
		i++;
	line = malloc((i + 1) * sizeof(char));
	if (line == NULL)
		return (NULL);
	ft_strlcpy(line, temp, i + 1);
	line[i] = 0;
	return (line);
}

static char	*fill_temp(int fd, char *temp)
{
	char	*buff;
	int		bytes_read;
	int		found_line;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (buff == NULL)
		return (NULL);
	found_line = 0;
	bytes_read = read(fd, buff, BUFFER_SIZE);
	while (!found_line && bytes_read > 0)
	{
		buff[bytes_read] = 0;
		temp = ft_strjoin(temp, buff);
		if (!temp)
		{
			free(buff);
			return (NULL);
		}
		if (ft_strchr(temp, '\n'))
			found_line = 1;
		else
			bytes_read = read(fd, buff, BUFFER_SIZE);
	}
	free(buff);
	return (temp);
}

char	*get_next_line(int fd)
{
	static char	*temp;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, NULL, 0) < 0)
		return (free(temp), temp = NULL, NULL);
	if (!temp)
	{
		temp = ft_strdup("");
		if (!temp)
			return (NULL);
	}
	temp = fill_temp(fd, temp);
	if (temp == NULL || temp[0] == 0)
		return (free(temp), temp = NULL, NULL);
	line = get_line(temp);
	if (line == NULL)
		return (free(temp), temp = NULL, NULL);
	temp = clear_temp(temp);
	return (line);
}
