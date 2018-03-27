/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_validchars.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:12:31 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/28 20:54:38 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*
** Retourne 1 si le tetrimino passe en parametre ne contient que des caracteres valides.
** Retourne 0 sinon.
*/

int		ft_check_validchars(char **tetrimino)
{	
	size_t		line;
	size_t		col;

	line = 0;
	while (tetrimino[line])
	{
		col = 0;
		while (tetrimino[line][col])
		{
			if (tetrimino[line][col] != '#' && tetrimino[line][col] != '.')
				return (0);
			col++;
		}
		line++;
	}
	return (1);
}
