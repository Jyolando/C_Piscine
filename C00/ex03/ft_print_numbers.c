/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:30:56 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/10 15:42:46 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	tempInt;

	tempInt = '0';
	while (tempInt <= '9')
	{
		write(1, &tempInt, 1);
		tempInt++;
	}
}
