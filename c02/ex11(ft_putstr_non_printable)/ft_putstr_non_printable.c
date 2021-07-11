#include <stdio.h>
#include <unistd.h>

void	put_nbr(int nbr, char *base, char basesize)
{
	if (nbr > basesize - 1 || nbr < - basesize - 1)
	{
		put_nbr(nbr / basesize, base, basesize);
		put_nbr(nbr % basesize, base, basesize);
	}
	else if (nbr < 0)
	{
		nbr = nbr * -1;
		if (nbr < 16)
			write(1, &base[nbr], 1);
	}
	else
		if (nbr < 16)
			write(1, &base[nbr], 1);
}

void ft_putstr_non_printable(char *str)
{
	int	i;
	char *base = "0123456789abcdef";

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			if (str[i] < 16)
				write(1, "\\0", 2);
			else
				write(1, "\\", 1);
			put_nbr(str[i], base, 16);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\\0", 2);
	put_nbr(str[i], base, 16);
}
