/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrindex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 21:22:03 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/27 21:58:09 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_tetrindex(char ***tab_input, t_params params)
{
	int		j;
	int		k;

	j = 0;
	while (tab_input[params.i][j])
	{
		k = 0;
		while (tab_input[params.i][j][k])
		{
			if (tab_input[params.i][j][k] == '#')
				return (j*4 +  k);
			k++;
		}
		j++;
	}
	return (-1);
}
