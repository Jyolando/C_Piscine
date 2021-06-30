/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 14:51:07 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/18 22:05:31 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*back;
	int		i;

	back = malloc(*src);
	if (back == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		back[i] = src[i];
		i++;
	}
	return (back);
}
