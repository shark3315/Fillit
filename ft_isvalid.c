/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:34:21 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/19 20:23:25 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*
** Retourne 1 si le tableau passe en parametre est valide.
** Retourne 0 sinon.
*/

int		ft_isvalid(char ***tab)
{
	size_t		i;

	i = 0;
	while (tab[i])
	{
		if (ft_check_squaresnb(tab[i]) && ft_check_blocksnb(tab[i]) && ft_check_validchars(tab[i])
					&& ft_check_arrangement(tab[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
