#include <stdio.h>
#include <stdlib.h>

int	ft_isnull(char *str)
{
	if (str[0])
		return (1);
	return (0);
}


int ft_any(char **tab, int(*f)(char*));

int	main(void)
{
	int	(*ptr)(char*);
	ptr = &ft_isnull;
	//wrong
	// char	array[4][10] =	{
	// 						"hello",
	// 						"12345",
	// 						"54321",
	// 						};
	//correct declaration that goes inside the function
	char *array[] = { "hello", "guys", "how r u"};
	char *array2[] = { "", "", ""};
	printf("Return should be 1 and is: %d\n", ft_any(array, ptr));
	printf("Return should be 0 and is: %d\n", ft_any(array2, ptr));
	if (ft_any(array, ptr))
		return(1);
	return (0);
}
