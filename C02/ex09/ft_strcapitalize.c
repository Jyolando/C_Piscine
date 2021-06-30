/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 23:23:16 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/12 23:44:21 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	ft_strcapitalize(char *str)
{
	int	i;
	int	k;

	i = 1;
	k = i - 1;
	ft_strlowcase(str);
	if (str[0] == '\0')
		return (str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		if ((str[k] >= 32 && str[k] <= 47) && (str[i] >= 97 && str[i] <= 122))
			str[i] -= 32;
		i++;
	}

	return (str);
}
