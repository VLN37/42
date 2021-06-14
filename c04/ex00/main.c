#include<stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	teste1[] = "Don't Panic!";
	char	teste2[] = "";

	printf("%s\n", teste1);
	printf("%s\n", teste2);
	printf("Teste 1 should have 12 characters and has: %d\n", ft_strlen(teste1));
	printf("Teste 2 should have 0 characters and has: %d\n", ft_strlen(teste2));
}
