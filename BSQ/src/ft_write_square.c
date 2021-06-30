/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:37:57 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/30 20:28:47 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_max_square.h"
#include "ft_struct.h"
#include <unistd.h>

void	ft_write_square(int **map, t_coords square, t_config cfg)
{
	int	i;
	int	j;

	i = 0;
	while (i < cfg.size)
	{
		j = 0;
		while (j < cfg.length)
		{
			if ((i >= square.y - (square.num - 1) && j >= square.x - (square.num - 1)) \
				&& (i <= square.y && j <= square.x))
				write(1, &cfg.full, 1);
			else if (map[i][j] == 0)
				write(1, &cfg.obstacle, 1);
			else
				write(1, &cfg.empty, 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
