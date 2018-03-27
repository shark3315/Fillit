/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 22:23:44 by flecouey          #+#    #+#             */
/*   Updated: 2018/03/01 13:19:20 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*
** tab_input : chaque case du tableau contient un tetrimino forme a partir de strsplit.
** tab_output : tableau de chaines de caracteres representant l'affichage final.
*/

int		main(int argc, char **argv)
{
	char	***tab_input;
	char	**tab_output;

	tab_input = NULL;
	if (argc != 2)
	{
		ft_putstr("usage : ./fillit source_file\n");
		return (0);
	}
	if (!(tab_input = ft_readfile(argv[1])) || !(ft_isvalid(tab_input)))
	{
		ft_putstr("error\n");
		return (0);
	}
	tab_output = ft_fillit(tab_input);
	ft_putchar('\n');
	ft_printoutput(tab_output);
	return (0);
}
