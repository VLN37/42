#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char teste1[] = "Hello World! ";
	char teste2[] = "Hello World! ";
	char teste3[] = "abc";
	char teste4[] = "cde";

	printf("%s\n", teste1);
	printf("%s\n", teste2);
	printf("O retorno deve ser 0 e é: %d\n\n", ft_strcmp(teste1, teste2));
	printf("O retorno deve ser 0 e é: %d\n\n", strcmp(teste1, teste2));
	printf("%s\n", teste3);
	printf("%s\n", teste4);
	printf("O retorno deve ser >1 e é: %d\n\n", ft_strcmp(teste4, teste3));
	printf("%s\n", teste4);
	printf("%s\n", teste3);
	printf("O retorno deve ser <-1 e é: %d\n\n", ft_strcmp(teste3, teste4));
}
