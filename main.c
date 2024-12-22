/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:41:53 by alfrberm          #+#    #+#             */
/*   Updated: 2024/12/17 17:20:16 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;
	int	i;

    // Abrir el archivo "test.txt" en modo lectura
    fd = open("example.txt", O_RDONLY);
    if (fd == -1)
    {
        // Si no se puede abrir el archivo, mostrar un mensaje de error
        perror("Error opening file");
        return (1);
    }

    // Leer e imprimir las líneas del archivo
	i = 1;
    while ((line = get_next_line(fd)) != NULL)
    {
		printf("%d", i);
        printf("%s", line);
        free(line);// Liberar la memoria de la línea leída
		i++;
	}

    // Cerrar el archivo después de leer
    close(fd);

    return (0);
}
