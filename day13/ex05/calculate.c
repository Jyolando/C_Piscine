/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:57:31 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/22 18:45:20 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	main(int argc, char **argv)
{
	if (argc > 4 && argc < 4)
	{
		return (0);
	}
	else
	{
		if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/'\
		 && argv[2][0] != '*' && argv[2][0] != '%')
		{
			write(1, "0", 1);
			return (0);
		}
		else
		{
			ft_operator(argv);
			return (0);
		}
	}
}
