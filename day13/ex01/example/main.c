/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:15:41 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/22 12:37:40 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int(*f)(int));

void print(int num)
{
	num -= 5;
	printf("%d | ", num);
}

int main()
{
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *bob;

	void *func = &print;
	bob = ft_map(tab, 10, func);
}
