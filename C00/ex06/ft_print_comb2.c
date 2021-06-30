/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:15:17 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/10 17:25:05 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_check(int i)
{
	char	fS;
	char	sS;

	fS = i / 10 + '0';
	sS = i % 10 + '0';
	write(1, &fS, 1);
	write(1, &sS, 1);
}

void	ft_print_comb2(void)
{
	int	fNum;
	int	sNum;

	fNum = 0;
	sNum = 1;
	while (fNum <= 99)
	{
		while (sNum <= 99)
		{
			ft_check(fNum);
			write(1, " ", 1);
			ft_check(sNum);
			if (fNum != 98 || sNum != 99)
				write(1, ", ", 2);
			sNum++;
		}
		fNum++;
		sNum = fNum + 1;
	}
}
