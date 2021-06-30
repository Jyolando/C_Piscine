/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 20:30:25 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/10 15:42:16 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	tempLetter;

	tempLetter = 'z';
	while (tempLetter >= 'a')
	{
		write(1, &tempLetter, 1);
		tempLetter--;
	}	
}
