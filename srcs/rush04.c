/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 10:42:18 by zraunio           #+#    #+#             */
/*   Updated: 2021/05/28 11:47:56 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_rush.h"

static void	ft_first_line(int x)
{
	int		i;

	ft_putchar('A');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('B');
		i++;
	}
	if (x != 1)
		ft_putchar('C');
	ft_putchar('\n');
}

static void	ft_body(int x, int y)
{
	int		i;
	int		n;

	n = 1;
	while (n < y - 1)
	{
		ft_putchar('B');
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(' ');
			i++;
		}
		if (x != 1)
			ft_putchar('B');
		ft_putchar('\n');
		n++;
	}
}

static void	ft_last_line(int x)
{
	int		i;

	ft_putchar('C');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('B');
		i++;
	}
	if (x != 1)
		ft_putchar('A');
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
