/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placepiece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 21:03:31 by flecouey          #+#    #+#             */
/*   Updated: 2018/03/01 16:45:18 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_placepiece(char ***tab_input, char **tab_output, t_params params)
{
	t_issafe	s;

	s.j_out = params.j;
	s.k_out = params.k;
	s.j_in = ft_tetrindex(tab_input, params) / 4;
	s.k_in = ft_tetrindex(tab_input, params) % 4;
	while (s.j_in < 4)
	{
		while (s.k_in < 4)
		{
			if (tab_input[params.i][s.j_in][s.k_in] == '#')
			{
				tab_output[s.j_out][s.k_out] = 'A' + params.i;
			}
			s.k_in++;
			s.k_out++;
		}
		s.k_out = params.k - ft_tetrindex(tab_input, params) % 4;
		s.j_out++;
		s.k_in = 0;
		s.j_in++;
	}
	return (tab_output);
}
