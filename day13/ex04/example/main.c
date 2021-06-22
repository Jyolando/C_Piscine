/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:15:41 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/22 18:17:46 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	sort(int a, int b)
{
	if (a < b)
		return (1);
	else if (a == b)
		return (0);
	else
		return(-1);
}

int main()
{
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int tav[10] = {10, 9, 5, 7, 6, 5, 4, 3, 2, 1};

	void *func = &sort;
	printf("Сортирован: %d", ft_is_sort(tav, 10, func));
}
