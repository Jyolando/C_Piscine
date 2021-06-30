/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:07:44 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/18 21:50:02 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	temp;
	int	i;

	i = 0;
	temp = 0;
	temp = min;
	if (min >= max)
		return (NULL);
	range = malloc(4 * (max - min));
	while (i < (max - min))
	{
		range[i] = temp;
		temp++;
		i++;
	}
	return (range);
}
