/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:19:38 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/30 18:18:46 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_MAP_H
# define FT_GET_MAP_H

# include "ft_struct.h"
# include <stdlib.h>
# include <unistd.h>

void	ft_map_error(void);
void	ft_putstr(char *str);
void	ft_free_mem(int **object, int count);

#endif
