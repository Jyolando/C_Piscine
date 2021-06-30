/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max_square.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:10:19 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/30 19:30:36 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_find_max_square.h"

int	write_temp(int num, int i, int j, t_coords *square)
{
	if (num > square->num)
	{
		square->x = j;
		square->y = i;
		square->num = num;
		return (num);
	}
	else
	{
		return (square->num);
	}
}

t_coords	ft_find_max_square(int **map, t_config cfg)
{
	int			i;
	int			j;
	t_coords	square;

	i = -1;
	square.num = 0;
	while (++i < cfg.size)
	{
		j = -1;
		while (++j < cfg.length)
		{
			if (i == 0 || j == 0)
			{
				square.num = write_temp(map[i][j], i, j, &square);
			}
			else
			{
				if (map[i][j] != 0)
					map[i][j] = ft_find_min(map[i - 1][j],
							map[i][j - 1], map[i - 1][j - 1]) + 1;
				square.num = write_temp(map[i][j], i, j, &square);
			}
		}
	}
	return (square);
}
