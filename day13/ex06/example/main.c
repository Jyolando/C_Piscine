/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 19:18:29 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/22 19:29:04 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	ft_sort_string_tab(argv[1]);
	//printf("%s", argv[1]);
}
