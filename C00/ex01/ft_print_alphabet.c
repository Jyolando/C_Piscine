/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 20:14:48 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/10 15:41:45 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	tempLetter;

	tempLetter = 'a';
	while (tempLetter <= 'z')
	{
		write(1, &tempLetter, 1);
		tempLetter++;
	}
}
