/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 20:29:36 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/13 20:34:02 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while (s1[i] != '\0')
	{
		diff = (s1[i] - s2[i]);
		if (diff != 0)
			return (diff);
		else
			i++;
	}
	if (s2[i] != '\0')
		return (s1[i] - s2[i]);
	return (0);
}
