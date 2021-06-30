/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_config.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:53:00 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/30 21:00:04 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_config.h"

int	ft_equal_param(t_config *conf, char *text)
{
	if (conf->full == conf->obstacle || conf->obstacle == conf->empty
		|| conf->full == conf->empty)
	{
		ft_map_error();
		conf->size = 0;
		free(text);
		return (0);
	}
	return (1);
}

int	ft_write_conf(int pos, char *text, t_config *conf, int cfg_size)
{
	while (pos <= cfg_size)
	{
		if (text[pos] >= '0' && text[pos] <= '9')
		{
			conf->size = conf->size * 10 + (text[pos] - 48);
			pos++;
		}
		else
		{
			ft_map_error();
			conf->size = 0;
			free(text);
			return (0);
		}
	}
	return (1);
}

void	ft_fill(t_config *conf, char *text, int *cfg_size)
{
	conf->full = text[*cfg_size - 1];
	conf->obstacle = text[*cfg_size - 2];
	conf->empty = text[*cfg_size - 3];
	*cfg_size -= 4;
}

t_config	ft_get_config (int file, int r1, int r2)
{
	char		*text;
	int			i;
	int			s;
	t_config	conf;

	i = 0;
	s = 1;
	conf.size = 0;
	text = (char *)malloc(r1 + 1);
	read (file, text, r1 + 1);
	ft_fill(&conf, text, &r1);
	if (!(ft_equal_param(&conf, text)))
		return (conf);
	if (!(ft_write_conf(i, text, &conf, r1)))
		return (conf);
	free(text);
	if ((r2 % conf.size) != 0)
	{
		ft_map_error();
		conf.size = 0;
		return (conf);
	}
	else
		conf.length = r2 / conf.size;
	return (conf);
}
