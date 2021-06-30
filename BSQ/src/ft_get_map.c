/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:36:59 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/30 21:00:48 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_map.h"

int	ft_check_char(char curr, t_config cfg, int pos, int **map)
{
	if (curr != cfg.empty && curr != cfg.obstacle)
	{
		ft_map_error();
		ft_free_mem(map, pos + 1);
		return (0);
	}
	return (1);
}

int	**ft_get_map(int file, t_config cfg)
{
	int		i;
	int		j;
	int		**map;
	char	buf[1];

	i = -1;
	map = (int **)malloc(sizeof(int *) * cfg.size);
	while (++i < cfg.size)
	{
		j = -1;
		map[i] = (int *)malloc(sizeof(int) * cfg.length);
		while (++j < cfg.length)
		{
			read(file, buf, 1);
			if (!(ft_check_char(buf[0], cfg, i, map)))
				return (0);
			else if (buf [0] == cfg.empty)
				map[i][j] = 1;
			else
				map[i][j] = 0;
		}
		read(file, buf, 1);
	}
	close(file);
	return (map);
}
