/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_blocksnb.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 12:49:34 by flecouey          #+#    #+#             */
/*   Updated: 2018/03/27 15:35:52 by lapain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*
** Retourne 1 si le tetrimino passe en parametre compte exactement 4 caracteres '#'.
** Retourne 0 sinon.
*/

int		ft_check_blocksnb(char **tetrimino)
{	
	size_t		blocksnb;
	size_t		line;
	size_t		col;

	blocksnb = 0;
	line = 0;
	while (tetrimino[line])
	{
		col = 0;
		while (tetrimino[line][col])
		{
			if (tetrimino[line][col] == '#')
				blocksnb++;
			col++;
		}
		line++;
	}
	if(blocksnb != 4)
		return (0);
	return(1);
}
