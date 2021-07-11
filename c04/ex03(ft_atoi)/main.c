#include<stdio.h>

int ft_atoi(char *str);

int	main(void)
{
	char teste1[] = "      -++-+-----2147483648";
	char teste2[] = "      -++-+----2147483647";
	char teste3[] = "    a  -++-+----2147483648";
	char teste4[] = "      -++-+s----1337";
	char teste5[] = "   -----1337s1337";
	char teste6[] = "--+-70703";
	char teste7[] = "1231a1";

	printf("Inteiro mínimo: %d\n", ft_atoi(teste1));
	printf("Inteiro máximo: %d\n", ft_atoi(teste2));
	printf("Teste de lixo: %d\n", ft_atoi(teste3));
	printf("Teste de lixo: %d\n", ft_atoi(teste4));
	printf("Teste de lixo: %d\n", ft_atoi(teste5));
	printf("Teste de lixo: %d\n", ft_atoi(teste6));
	printf("Teste de lixo: %d\n", ft_atoi(teste7));
}
