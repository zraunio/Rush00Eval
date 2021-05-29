/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 10:46:11 by zraunio           #+#    #+#             */
/*   Updated: 2021/05/28 11:48:15 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_rush.h"

static void	ft_first_line(int x)
{
	int		i;

	ft_putchar('/');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('*');
		i++;
	}
	if (x != 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

static void	ft_body(int x, int y)
{
	int		i;
	int		n;

	n = 1;
	while (n < y - 1)
	{
		ft_putchar('*');
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(' ');
			i++;
		}
		if (x != 1)
			ft_putchar('*');
		ft_putchar('\n');
		n++;
	}
}

static void	ft_last_line(int x)
{
	int		i;

	ft_putchar('\\');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('*');
		i++;
	}
	if (x != 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_first_line(x);
	if (y != 1)
	{
		ft_body(x, y);
		ft_last_line(x);
	}
}
