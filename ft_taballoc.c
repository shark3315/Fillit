/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_taballoc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 19:46:44 by flecouey          #+#    #+#             */
/*   Updated: 2018/03/28 11:19:10 by lapain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_taballoc(void)
{
	int		j;
	int		k;
	char	**tab_output;

	j = 0;
	tab_output = NULL;
	if (!(tab_output = ft_memalloc(sizeof(char*) * (SIZE + 1))))
		return (NULL);
	while (j < (SIZE))
	{
		if (!(tab_output[j] = ft_memalloc(sizeof(char) * (SIZE + 1))))
			return (NULL);
		k = 0;
		while(k < SIZE)
		{
			tab_output[j][k] = '.';
			k++;
		}
		j++;
	}
	return (tab_output);
}
