/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 19:04:19 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/22 19:29:12 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_swap(char **tab, int pos)
{
	char temp;
	temp = *tab[pos];
	*tab[pos - 1] = *tab[pos];
	*tab[pos] = temp;
}

void	ft_charcmp(char **tab, int pos)
{
	if (tab[pos - 1] - tab[pos] > 0)
		ft_swap(tab, pos);
}

void	ft_sort_string_tab(char **tab)
{
	int	length;
	int	iter;
	int	i;
	printf("test");

	length = ft_strlen(*tab);
	iter = (length - 1) * (length / 2);
	i = 1;
	while (iter != 0)
	{
		if(i > length)
			i = 1;
		ft_charcmp(tab, i);
		i++;
		iter--;
	}
}
