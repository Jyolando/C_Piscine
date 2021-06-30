/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:14:48 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/17 19:39:07 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	(void) argc;
	i = 1;
	while (argv[i])
	{
		n = 0;
		while (argv[i][n])
		{
			write(1, &argv[i][n], 1);
			n++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
