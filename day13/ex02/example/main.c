/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:08:18 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/22 14:11:25 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_any(char **tab, int(*f)(char*));

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
	char *words[10] = {"eeJllo", "lul"};
	
	printf("%d", ft_any(words, &ft_uppercase));
}
