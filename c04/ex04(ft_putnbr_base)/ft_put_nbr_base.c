#include <unistd.h>
#include <stdio.h>

// show a number passed as parameter on the screen in a specific base
//divide number by base len
//putnbr
//validation
//quit if:
//base is empty or = 1
//base has the same character twice
//base has + or -


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	validate_base(char *base)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if(ft_strlen(base) == 0 || ft_strlen(base) == 1)
			return (1);
	while(base[j])
	{
		while(base[i])
		{
			if ((base[i] == base[j]) || (base[i] == '-' || base[i] == '+'))
				return (1);
			i++;
		}
		j++;
		i = j + 1;
	}
	return (0);
}

void put_nbr(int nbr, char *base, char basesize)
{
	if (nbr > basesize - 1 || nbr < -basesize -1)
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

void ft_putnbr_base(int nbr, char *base)
{
	if (validate_base(base))
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	put_nbr(nbr, base, ft_strlen(base));
	return ;
}
