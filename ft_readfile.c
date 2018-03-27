/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 15:45:43 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/18 17:43:39 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

#define BUF_SIZE 4096

static char		***ft_bufsplit(const char *buf, size_t nb_tetriminos)
{
	size_t		i;
	size_t		j;
	char		***tab;

	i = 0;
	if (!(tab = ft_memalloc(sizeof(char**) * (nb_tetriminos + 1))))
		return (NULL);
	while (i < nb_tetriminos)
	{
		if (!(tab[i] = ft_memalloc(sizeof(char*) * (4 + 1))))
			return (NULL);
		j = 0;
		while (j < 4)
		{
			if (!(tab[i][j] = ft_memalloc(sizeof(char) * (4 + 1))))
				return (NULL);
			tab[i][j] = ft_strsub(buf, i*20 + j*5 + i*(i == 0 ? 0 : 1), 4);
			j++;
		}
		i++;
	}
	return (tab);
}

char			***ft_readfile(char *source_file)
{
	char		***tab;
	int			fd;
	size_t		len_read;
	size_t		nb_tetriminos;
	char		buf[BUF_SIZE + 1];

	fd = open(source_file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (NULL);
	}
	len_read = read(fd, buf, BUF_SIZE);
	buf[len_read] = '\0';
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (NULL);
	}
	nb_tetriminos = (len_read + 1) / 21;
	if ((len_read + 1) % 21 || !(tab = ft_bufsplit(buf, nb_tetriminos)))
		return (NULL);
	return (tab);
}
