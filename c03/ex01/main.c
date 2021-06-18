#include<stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);
int	main(void)
{
	char teste1[] = "abcde";
	char teste2[] = "abcde";
	char teste3[] = "A";
	char teste4[] = "V";
	char teste5[] = "abcdf";

	printf("%s\n", teste1);
	printf("%s\n", teste2);
	printf("O retorno deve ser 0 e é: %d\n\n", ft_strncmp(teste1, teste2, 4));
	printf("%s\n", teste1);
	printf("%s\n", teste5);
	printf("O retorno deve ser >0 e é: %d\n\n", ft_strncmp(teste5, teste2, 4));
	printf("%s\n", teste3);
	printf("%s\n", teste4);
	printf("O retorno deve ser <0 e é: %d\n\n", ft_strncmp(teste3, teste4, 4));
}
