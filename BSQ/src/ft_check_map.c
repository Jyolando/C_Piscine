/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:43:55 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/30 18:28:52 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
void	ft_map_error(void);

int	ft_check_map(char *filename)
{
	int	file;

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		ft_map_error();
		return (0);
	}
	else
		return (file);
}
