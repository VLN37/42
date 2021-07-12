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

int	return_index(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i++);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	validate_base(char *base)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (1);
	while (base[j])
	{
		while (base[i])
		{
			if ((base[i] == base[j]) || (base[i] == '-' || base[i] == '+')
				|| (base[i] >= 9 && base[i] <= 13) || (base[i] == ' '))
				return (1);
			i++;
		}
		j++;
		i = j + 1;
	}
	return (0);
}

int	validate_nbr(char *str, int *ptrsign, int *ptri, char *base)
{
	int	i;

	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*ptrsign *= -1;
		i++;
	}
	*ptri = i;
	if (return_index(base, str[i]) == -1)
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (validate_nbr(str, &sign, &i, base))
		return (0);
	if (validate_base(base))
		return (0);
	while (str[i] != '\0')
	{
		if (return_index(base, str[i]) == -1)
			return (result * sign);
		else
			result = (result * ft_strlen(base)) + return_index(base, str[i]);
		i++;
	}
	return (result * sign);
}
