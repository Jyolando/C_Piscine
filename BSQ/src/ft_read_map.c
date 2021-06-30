/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:14:56 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/30 21:07:10 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_map.h"

void	ft_success_get_map(int **map, t_config cfg, int *sizes, int file)
{
	ft_write_square(map, ft_find_max_square(map, cfg), cfg);
	close(file);
	ft_free_mem(map, cfg.size);
	free(sizes);
}

void	ft_success_get_sizes(char *filename, int *sizes)
{
	int			**map;
	int			file;
	t_config	cfg;

	file = ft_check_map(filename);
	cfg = ft_get_config(file, sizes[0], sizes[1]);
	if (cfg.size != 0 && cfg.length != 0)
	{
		map = ft_get_map(file, cfg);
		if (map != 0)
		{
			ft_success_get_map(map, cfg, sizes, file);
		}
		else
		{
			free(sizes);
			close(file);
		}
	}
	else
		free(sizes);
}

void	ft_read_map(char *filename)
{
	int			file;
	int			*sizes;

	file = ft_check_map(filename);
	if (file > 0)
	{
		sizes = ft_read_sizes(file);
		if (sizes[0] != 0 && sizes[1] != 0)
		{
			ft_success_get_sizes(filename, sizes);
		}
		else
		{
			ft_map_error();
			free(sizes);
		}
	}
}
