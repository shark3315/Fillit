/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issafe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 11:13:46 by flecouey          #+#    #+#             */
/*   Updated: 2018/03/01 13:16:41 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

static int	ft_conflict(char ***tab_input, char  **tab_output, t_params params,  t_issafe s)
{
	if (s.k_out < 0 && tab_input[params.i][s.j_in][s.k_in] == '#')
		return (1);
	if (s.k_out >= params.min_square && tab_input[params.i][s.j_in][s.k_in] == '#')
		return (1);
	if (s.j_out >= params.min_square && tab_input[params.i][s.j_in][s.k_in] == '#')
		return (1);
	if (ft_isupper(tab_output[s.j_out][s.k_out]) && tab_input[params.i][s.j_in][s.k_in] == '#')
		return (1);
	return (0);
}

int			ft_issafe(char ***tab_input, char **tab_output, t_params params)
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
			if (ft_conflict(tab_input, tab_output, params, s))
				return (0);
			s.k_in++;
			s.k_out++;
		}
		s.k_out = params.k - ft_tetrindex(tab_input, params) % 4;
		s.k_in = 0;
		s.j_out++;
		s.j_in++;
	}
	return (1);
}
