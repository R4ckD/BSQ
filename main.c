/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <caliaga-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:59:31 by caliaga-          #+#    #+#             */
/*   Updated: 2022/07/26 18:13:27 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unnistd>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}
/* Mapa pasado como argumento .
 * Tu programa debe aceptar entre 1 y n parámetros.
 * Cuando tu programa reciba varios parámetros como argumento, 
 * cada solución o map error debe ir seguido de un salto de línea. */
void input argument 

/* PROCESADO DE LA PRIMERA LINEA: mapa, vacío, obstáculo, lleno*/
/* Voy a crear una estructura para guardar coordenadas. xy.x xy.y xy.value */

char code_line (char *str)
{


	Return ();
}

/* Entregar un makefile */
int	main (int argc, char **argv)
{
   	char * url_map;
   	char * url_map = argv[1];

	int	fd;
	ssize_t	n_bytes;
	char	buf[2000];
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error de apertura de archivo");
	}
	else
	{
		n_bytes = read(fd, buf, 2000);
		if	(n_bytes == 0)
		{
			printf ("Error de lectura");
		}
		else
		{
			printf("%d y su contenido %s \n", (int)n_bytes, buf);
		}
	}
	return(0);
	
	int	i = -1; /* Contador */
	int row = 3;
	char	**tab = (char **)malloc(sizeof(char **) * row);
	while (++i < row)
		tab[i] = argv[i];
}
