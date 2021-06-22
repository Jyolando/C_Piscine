/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:26:08 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/22 18:40:53 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_operator(char **argv)
{
	if (argv[2][0] == '+' && argv[2][1] == 0)
		ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
	else if (argv[2][0] == '-' && argv[2][1] == 0)
		ft_putnbr(ft_atoi(argv[1]) - ft_atoi(argv[3]));
	else if (argv[2][0] == '/' && argv[2][1] == 0)
	{
		if (ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : division by zero\n");
		else
			ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
	}
	else if (argv[2][0] == '*' && argv[2][1] == 0)
		ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
	else if (argv[2][0] == '%' && argv[2][1] == 0)
	{
		if (ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : modulo by zero\n");
		else
			ft_putnbr(ft_atoi(argv[1]) % ft_atoi(argv[3]));
	}
}
