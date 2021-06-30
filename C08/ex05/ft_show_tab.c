#include "ft_stock_str.h"
#include <unistd.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;
	char	size;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putchar(par[i].str);
		ft_putchar("\n");
		size = par[i].size + 48;
		write(1, &size, 1);
		ft_putchar("\n");
		ft_putchar(par[i].copy);
		ft_putchar("\n");
		i++;
	}
}
