/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_rev_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:14:48 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/17 19:39:33 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = argc - 1;
	while (i > 0)
	{
		n = 0;
		while (argv[i][n] != 0)
		{
			write(1, &argv[i][n], 1);
			n++;
		}
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
