/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_empty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:55:03 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/21 19:56:12 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_read_empty(char *buf, int size)
{
	int	temp;

	temp = read(0, buf, size);
	while (temp)
	{
		buf[temp] = '\0';
		ft_putstr(buf);
		temp = read(0, buf, size);
	}
}
