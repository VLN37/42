#include<stdio.h>
#include<unistd.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	origin[] = "Don't Panic! :)";
	char	dest[] = "teste";

	printf("Destination string: %s\n", dest);
	printf("Origin string: %s\n", origin);
	ft_strcpy(dest, origin);
	printf("After strcpy: %s\n", dest);
}
