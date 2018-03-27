# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flecouey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/17 12:38:34 by flecouey          #+#    #+#              #
#    Updated: 2018/02/28 20:55:19 by flecouey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = ft_calcsquare.c \
	   ft_check_arrangement.c \
	   ft_check_blocksnb.c \
	   ft_check_squaresnb.c \
	   ft_check_validchars.c \
	   ft_fillit.c \
	   ft_issafe.c \
	   ft_isvalid.c \
	   ft_nbtetri.c \
	   ft_placepiece.c \
	   ft_printoutput.c \
	   ft_readfile.c \
	   ft_removepiece.c \
	   ft_taballoc.c \
	   ft_tetrindex.c \
	   main.c

OBJS = $(SRCS:.c=.o)

INC = fillit.h



all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INC)
	gcc $(OBJS) -L. -lft -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all
