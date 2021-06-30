/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 13:10:27 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/10 15:43:19 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	fL;
	char	sL;
	char	tL;

	fL = '0';
	while (fL <= '9')
	{
		sL = fL + 1;
		while (sL <= '9')
		{
			tL = sL + 1;
			while (tL <= '9')
			{
				write(1, &fL, 1);
				write(1, &sL, 1);
				write(1, &tL, 1);
				if (fL < '7' && sL <= '8' && tL <= '9')
					write(1, ", ", 2);
				tL++;
			}
			sL++;
		}
		fL++;
	}
}
