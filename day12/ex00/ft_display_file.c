/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 17:20:14 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/21 18:54:10 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	main(int argc, char **argv)
{
	int		file;
	char	buff[BUFF_SIZE + 1];

	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	ft_display_buff(file, buff, BUFF_SIZE);
}
