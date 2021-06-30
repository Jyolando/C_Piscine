/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:37:07 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/30 21:11:04 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main.h"

int	main(int argc, char **argv)
{
	int	counter;

	counter = 1;
	if (argc < 2)
	{
		ft_read_empty();
	}
	else
	{
		while (counter < argc)
		{
			if ((ft_check_map(argv[counter])) > 0)
			{
				ft_read_map(argv[counter]);
			}
			counter++;
		}
	}
	return (0);
}
