/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printoutput.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:11:34 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/27 21:58:52 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_printoutput(char **tab_output)
{
	int		j;

	j = 0;
	while (tab_output[j])
	{
		ft_putstr(tab_output[j]);
		ft_putchar('\n');
		j++;
	}
}
