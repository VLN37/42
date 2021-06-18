char *ft_strncpy(char *dest, char *src, unsigned int n);
#include<stdio.h>

int	main(void)
{
	char				origin[] = "Don't Panic! :)";
	char				dest[18];
	unsigned int		bytes;
	
	bytes = 5;
//	origin = "Hello World! :)";
	printf("Origin string: %s\n", origin);
	printf("Destination string: %s\n", dest);
	printf("After strncpy: %s\n", ft_strncpy(dest, origin, bytes));
	return (0);
}

