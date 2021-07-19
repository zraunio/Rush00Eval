# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/28 11:28:59 by zraunio           #+#    #+#              #
#    Updated: 2021/07/12 12:05:22 by zraunio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

N0 = m_rush00
N1 = m_rush01
N2 = m_rush02
N3 = m_rush03
N4 = m_rush04

T0 = rush00
T1 = rush01
T2 = rush02
T3 = rush03
T4 = rush04

R0 = srcs/rush00.c
R1 = srcs/rush01.c
R2 = srcs/rush02.c
R3 = srcs/rush03.c
R4 = srcs/rush04.c

SRC = $(addprefix srcs/, \
	main.c \
	ft_atoi.c \
	ft_putchar.c\
)

INC = ./

CC = gcc

CFLGS = -Wall -Wextra -Werror

all:

	$(CC) $(CFLGS) $(SRC) $(R0) -o $(N0)
	$(CC) $(CFLGS) $(SRC) $(R1) -o $(N1)
	$(CC) $(CFLGS) $(SRC) $(R2) -o $(N2)
	$(CC) $(CFLGS) $(SRC) $(R3) -o $(N3)
	$(CC) $(CFLGS) $(SRC) $(R4) -o $(N4)

piscine: 
	$(CC) $(CFLGS) ex00/*.c -o $(T0)
	# $(CC) $(CFLGS) ex00/*.c -o $(T1)
	# $(CC) $(CFLGS) ex00/*.c -o $(T2)
	# $(CC) $(CFLGS) ex00/*.c -o $(T3)
	# $(CC) $(CFLGS) ex00/*.c -o $(T4)

fclean:
	rm $(N0) $(N1) $(N2) $(N3) $(N4)

re: fclean all
