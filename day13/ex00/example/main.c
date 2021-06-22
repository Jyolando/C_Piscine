/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:15:41 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/22 13:32:10 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void print(int num)
{
	num *= 3;
	printf("%d | ", num);
}

int main()
{
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	void *func = &print;
	ft_foreach(tab, 100, func);
}
