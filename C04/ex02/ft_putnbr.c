/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:37:44 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/15 16:54:11 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	int		i;
	char	str[11];

	i = 0;
	while (nb > 10 || nb < -10)
	{
		if (nb % 10 < 0)
			str[i] = (nb % 10) * -1 + '0';
		else
			str[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	if ((nb / -1) > 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	str[i] = nb + '0';
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}
