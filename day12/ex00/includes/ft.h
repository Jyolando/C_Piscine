/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:23:19 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/21 16:49:24 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# include <unistd.h>

void	ft_putstr(char *str);
void	ft_display_buff(int fd, char *buf, int size);

# define BUFF_SIZE 1

#endif
