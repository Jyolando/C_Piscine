/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:32:03 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/21 19:36:55 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int main(int argc, char **argv)
{
	int	errno;
	int	file;
	int	i;
	char	buff[BUFF_SIZE + 1];

	errno = 0;
	i = 1;
	if (argc == 1)
	{
		read(0, buff, BUFF_SIZE);
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			if ((file = open(argv[i], O_RDONLY)) == -1)
			{
				if (errno != 0)
				{
					ft_putstr(argv[0]);
					write(1, ": ", 2);
					ft_putstr(argv[i]);
					write(1, ": ", 2);
					ft_putstr(strerror(errno));
					write(1, "\n", 1);
				}	
			}
			else
			{
				ft_display_buff(file, buff, BUFF_SIZE);
			}
			i++;
		}
	}
}
