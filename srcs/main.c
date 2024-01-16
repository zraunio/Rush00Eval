/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <zraunio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 11:03:33 by zraunio           #+#    #+#             */
/*   Updated: 2024/01/16 11:09:14 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_rush.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	else
		write(1, "error\n", 7);
	return (0);
}
