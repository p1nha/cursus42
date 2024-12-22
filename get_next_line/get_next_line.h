/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:01:19 by alfrberm          #+#    #+#             */
/*   Updated: 2024/12/17 16:56:56 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE 
# define BUFFER_SIZE 5
#endif

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
# include <fcntl.h>

size_t			ft_strlen(const char *str);
char			*ft_strdup(char *src);
char			*ft_strjoin(char *s1, char const *s2);
char			*ft_strchr(const char *str, int c);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
char			*get_next_line(int fd);

#endif
