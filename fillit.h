/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:12:08 by flecouey          #+#    #+#             */
/*   Updated: 2018/03/01 16:04:03 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FILLIT_H
# define _FILLIT_H

# define MAX(a, b) a > b ? a : b
# define SIZE 5

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_params
{
	int			nb_tetri;
	int			min_square;
	int			i;
	int			j;
	int			k;
}				t_params;

typedef struct	s_issafe
{
	int			j_in;
	int			j_out;
	int			k_in;
	int			k_out;
}				t_issafe;

int			ft_calcsquare(char **tab_output);
int			ft_check_arrangement(char **tetrimino);
int			ft_check_blocksnb(char **tetrimino);
int			ft_check_squaresnb(char **tetrimino);
int			ft_check_validchars(char **tetrimino);
char		**ft_fillit(char ***tab_input);
int			ft_issafe(char ***tab_input, char **tab_output, t_params params);
int			ft_isvalid(char ***tab_input);
int			ft_nbtetri(char ***tab_input);
char		**ft_placepiece(char ***tab_input, char **tab_output, t_params params);
void		ft_printoutput(char **tab_output);
char		***ft_readfile(char *source_file);
char		**ft_removepiece(char ***tab_input, char **tab_output, t_params params);
char		**ft_taballoc(void);
int			ft_tetrindex(char ***tab_input, t_params params);

#endif
