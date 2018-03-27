/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbtetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 19:44:19 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/21 19:46:18 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_nbtetri(char ***tab_input)
{
	int		i;

	i = 0;
	while (tab_input[i])
	{
		i++;
	}
	return (i);
}
