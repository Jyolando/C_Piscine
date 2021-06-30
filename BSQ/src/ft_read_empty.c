/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_empty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:38:26 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/30 20:07:28 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_read_map(char *filename);

void	ft_read_empty(void)
{
	char	buf[1];
	int		file;

	file = open("empty", O_WRONLY | O_RDONLY | O_TRUNC, 0644);
	while (read(0, buf, 1) != 0)
	{
		write(file, &buf[0], 1);
	}
	close(file);
	ft_read_map("empty");
}
