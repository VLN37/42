#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	validate_base(char *base);
int	ft_strlen(char *str);
int	ft_atoi_base(char *str, char *base);

void	put_nbr(int nbr, char *base, char basesize)
{
	if (nbr > basesize - 1 || nbr < -basesize - 1)
	{
		put_nbr(nbr / basesize, base, basesize);
		put_nbr(nbr % basesize, base, basesize);
	}
	else if (nbr < 0)
	{
		nbr = nbr * -1;
		write(1, &base[nbr], 1);
	}
	else
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (validate_base(base))
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	put_nbr(nbr, base, ft_strlen(base));
	return ;
}

void	ft_reverse_string(char *tab, int size)
{
	int	counter;
	int	buffer;

	size = ft_strlen(tab);
	counter = 0;
	while (counter < size / 2)
	{
		buffer = tab[counter];
		tab[counter] = tab[size - counter - 1];
		tab[size - counter - 1] = buffer;
		counter++;
	}
}

char	*itoa_base(int nbr, char *base_to, char *str, int basesize)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	if (nbr < 0)
	{
		sign = -1;
		nbr = nbr * -1;
	}
	if (nbr == 0)
	{
		str[i] = base_to[0];
		i++;
	}
	while (nbr != 0)
	{
		str[i] = base_to[nbr % basesize];
		i++;
		nbr = nbr / basesize;
	}
	if (sign == -1)
		str[i] = '-';
	ft_reverse_string(str, 50);
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		firstpass;
	int		i;
	int		basesize;

	basesize = ft_strlen(base_to);
	firstpass = ft_atoi_base(nbr, base_from);
	if ((validate_base(base_from)) || (validate_base(base_to)))
		return (NULL);
	str = (char *)malloc(sizeof(char) * 50);
	i = 0;
	while (i < 50)
	{
		str[i] = '\0';
		i++;
	}
	itoa_base(firstpass, base_to, str, basesize);
	return (str);
}
