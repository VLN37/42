#include <stdio.h>

int ft_count_if(char **tab, int length, int(*f)(char*));

int	ft_how_many_numbers(char* str)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res++;
		i++;
	}
	return(res);
}

int	main(void)
{
	int	(*ptr)(char *);
	ptr = &ft_how_many_numbers;
	char *array[] =	{"12345", "nope6", "7890"};

	printf("Return value should be 10 and is %d", ft_count_if(array, 42, ptr));
}
