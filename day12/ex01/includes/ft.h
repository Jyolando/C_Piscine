/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:23:19 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/21 19:36:17 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# include <unistd.h>
# include <string.h>
# include <errno.h>

void	ft_putstr(char *str);
void	ft_display_buff(int fd, char *buf, int size);
void	ft_error_msg(char **argv, int pos);

# define BUFF_SIZE 1

#endif
