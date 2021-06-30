/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:59:23 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/13 18:47:55 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_write_symbol(int line, int symb, int maxS, int maxL)
{
	if (line == 0 || line == maxL - 1)
	{
		if (symb == 0 || symb == maxS - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (symb == 0 || symb == maxS - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush(int a, int b)
{
	int	l;
	int	s;

	l = 0;
	while (l < b)
	{
		s = 0;
		while (s < a)
		{
			ft_write_symbol(l, s, a, b);
			s++;
		}
		ft_putchar('\n');
		l++;
	}
}
