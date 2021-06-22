/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 14:31:07 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/22 18:17:35 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int issort;

	i = 1;
	issort = 1;
	
	while (i < length && issort)
	{
		if(f(tab[i - 1], tab[i]) < 0)
			issort = 0;
		else
			i++;
	}
	if(issort != 1)
	{
		i = 1;
		issort = 1;
		while(i < length)
		{
			if(f(tab[i - 1], tab[i]) > 0)
				return (0);
			else
				i++;
		}
	}

	return (1);
}
