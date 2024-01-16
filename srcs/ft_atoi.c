/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 22:23:03 by jnivala           #+#    #+#             */
/*   Updated: 2024/01/16 11:09:47 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_rush.h"

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		nb;

	i = 0;
	sign = 1;
	nb = 0;
	if (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
