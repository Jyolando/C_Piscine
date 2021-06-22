/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:08:18 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/22 14:15:12 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char*));

int ft_uppercase(char *word)
{
	int i;

	i = 0;
	while (word[i])
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *words[10] = {"ef", "lel", "eelNo", "lJl", "eelElo", "lWl"};
	
	printf("%d", ft_count_if(words, 6, &ft_uppercase));
}
