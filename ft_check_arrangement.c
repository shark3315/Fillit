/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arrangement.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:19:29 by flecouey          #+#    #+#             */
/*   Updated: 2018/03/27 15:58:31 by lapain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*
 ** Retourne 1 si les blocs du tetrimino passe en parametre sont correctement agences.
 ** Retourne 0 sinon.
 */

size_t static   ft_linksnb(char **tetrimino, size_t line, size_t col)
{
	size_t		linksnb;
	size_t		i;
	size_t		j;

	linksnb = 0;
	i = (line == 0 ? 1 : line - 1);
	j = (col == 0 ? 1 : col - 1);
	while (i <= line + 1 && i <= 3)
	{
		if (tetrimino[i][col] == '#')
			linksnb++;
		i = i + 2;
	}
	while (j <= col + 1 && j <= 3)
	{
		if (tetrimino[line][j] == '#')
			linksnb++;
		j = j + 2;	
	}
	return (linksnb);
}

int static		ft_isasquare(char **tetrimino, size_t line, size_t col)
{
	if (line < 3 && col != 3 &&  tetrimino[line][col + 1] == '#' && tetrimino[line + 1][col] == '#'
			&& tetrimino[line + 1][col + 1] == '#')
		return (1);
	return (0);
}

int				ft_check_arrangement(char **tetrimino)
{
	int			opt;
	size_t		linksnb;
	size_t		line;
	size_t		col;

	opt = 0;
	linksnb = 0;
	line = 0;
	while (tetrimino[line])
	{
		col = 0;
		while (tetrimino[line][col])
		{
			if (tetrimino[line][col] == '#')
			{
				if (opt == 0 && ft_isasquare(tetrimino, line, col))
					return (1);
				else
					opt = 1; // opt (pour optimisation) permet de n'exécuter qu'une fois ft_isasquare
				linksnb = linksnb + ft_linksnb(tetrimino, line, col);
			}
			col++;
		}
		line++;
	}
	return (linksnb == 6 ? 1 : 0);
}
