/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:55:17 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/17 19:28:43 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *first, char *second)
{
	int	diff;
	int	i;

	i = 0;
	while (first[i] != '\0')
	{
		diff = first[i] - second[i];
		if (diff > 0)
			return (1);
		else if (diff < 0)
			return (0);
		else
			i++;
	}
	return (0);
}

char	**ft_array_sort(char **argv, int iter)
{
	char	*temp;

	if (ft_strcmp(argv[iter], argv[iter + 1]) == 1)
	{
		temp = argv[iter];
		argv[iter] = argv[iter + 1];
		argv[iter + 1] = temp;
	}
	return (argv);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_args(int argc, char **args)
{
	int	i;
	int	n;

	i = 1;
	while (i < argc)
	{
		n = 0;
		while (args[i][n] != '\0')
		{
			ft_putchar(args[i][n]);
			n++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	count;

	i = 1;
	count = (argc - 1) * (argc / 2);
	while (count != 0)
	{
		i = 1;
		while (i + 1 < argc)
		{
			ft_array_sort(argv, i);
			i++;
		}
		count--;
	}
	ft_print_args(argc, argv);
	return (0);
}
