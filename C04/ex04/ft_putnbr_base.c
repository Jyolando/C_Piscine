/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:41:36 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/15 17:57:29 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int base_lenght(char *base)
{
	int	i;

	i = 0;
	while(base[i])
	{
		i++;
	}
	return (i);
}

int check_reqs(char *base)
{
	int i;
	int n;

	i = 0;
	if(base_lenght(base) == 0 || base_lenght(base) == 1)
		return 0;
	else
	{
		while(base[i])
		{
			n = i + 1;
			while(n < base_lenght(base))
			{
				if(base[i] == base[n])
					return 0;
				else
					n++;
			}
			if (base[i] == '+' || base[i] == '-')
			{
				return 0;
			}
			i++;
		}
		return 1;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	char str[100000000];

	i = 0;
	if (check_reqs(base) == 1)
	{
		while (nbr > base_lenght(base) || nbr < base_lenght(base))
		{
			if (nbr % base_lenght(base) < 0)
				str[i] = base[(nbr % base_lenght(base)) * -1];
			else
				str[i] = base[nbr % base_lenght(base)];
			nbr /= base_lenght(base);
			i++;
		}
		if((nbr / -1) > 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		str[i] = base[nbr];
		while (i >= 0)
		{
			write(1, &str[i], 1);
			i--;
		}
	}
}
