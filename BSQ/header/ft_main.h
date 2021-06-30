/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:10:50 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/30 18:18:53 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAIN_H
# define FT_MAIN_H

# include <unistd.h>

void	ft_read_empty(void);
int		ft_check_map(char *filename);
void	ft_read_map(char *filename);
void	ft_putstr(char *str);

#endif
