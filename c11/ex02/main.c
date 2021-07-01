#include <stdio.h>
#include <stdlib.h>

int	ft_isnull(char *str)
{
	int	i;

	i = 0;
	if (str[i])
		return (1);
	return (0);
}

int ft_any(char **tab, int(*f)(char*));

int	main(void)
{
	int	(*ptr)(char*);
	ptr = &ft_isnull;
	char	array[4][10] =	{
							"hello",
							"12345",
							"54321",
							};
	if (ft_any(array, ptr))
		return(1);
	return (0);
}
