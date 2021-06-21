/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_buff.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:42:33 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/21 16:58:45 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_display_buff(int fd, char *buf, int size)
{
	int	temp;

	temp = read(fd, buf, size);
	while (temp)
	{
		buf[temp] = '\0';
		ft_putstr(buf);
		temp = read(fd, buf, size);
	}
}
