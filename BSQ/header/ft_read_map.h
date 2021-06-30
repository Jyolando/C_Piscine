/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:14:15 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/30 18:19:33 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READ_MAP_H
# define FT_READ_MAP_H

# include "ft_max_square.h"
# include "ft_struct.h"
# include <stdlib.h>
# include <unistd.h>

int			ft_check_map(char *filename);
int			*ft_read_sizes (int file);
int			**ft_get_map(int file, t_config cfg);
void		ft_write_square(int **map, t_coords square, t_config cfg);
void		ft_free_mem(int **object, int count);
void		ft_map_error(void);
t_config	ft_get_config (int file, int r1, int r2);
t_coords	ft_find_max_square(int **map, t_config cfg);

#endif
