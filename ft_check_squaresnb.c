/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_squaresnb.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 12:37:11 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/28 20:54:51 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*
** Retourne 1 si le tetrimino passe en parametre compte exactement 4 lignes et 4 colonnes.
** Retourne 0 sinon.
*/

int		ft_check_squaresnb(char **tetrimino)
{
	size_t		line;

	line = 0;
	while (tetrimino[line])
	{
		if (ft_strlen(tetrimino[line]) != 4)
			return (0);
		line++;
	}
	if (line != 4)
		return (0);
	return (1);
}
