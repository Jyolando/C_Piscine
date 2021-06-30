/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_sizes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:36:18 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/30 20:28:32 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_sizes.h"

int	ft_next(int file, char *buf)
{
	int	i;

	i = 0;
	while (buf[0] != '\n')
	{
		read(file, buf, 1);
		if (buf[0] != '\n')
			i++;
	}
	return (i);
}

int	ft_next_map(int file, char *buf)
{
	int	i;

	i = 0;
	while (read (file, buf, 1))
	{
		if (buf[0] != '\n')
			i++;
	}
	return (i);
}

int	*ft_read_sizes (int file)
{
	int		cfg_size;
	int		map_size;
	char	buf[1];
	int		*sizes;

	sizes = malloc(4 * 2);
	cfg_size = 0;
	map_size = 0;
	cfg_size = ft_next(file, buf);
	map_size = ft_next_map(file, buf);
	close(file);
	if (cfg_size < 4)
		sizes[0] = 0;
	else
		sizes[0] = cfg_size;
	sizes[1] = map_size;
	return (sizes);
}
