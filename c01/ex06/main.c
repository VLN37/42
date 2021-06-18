#include<stdio.h>
#include<unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	int		batata;
	char	*str;

	str = "Hello World!";
	batata = ft_strlen(str);
	printf("Expected: 12\nNumber of characters: %d\n", batata);
}
