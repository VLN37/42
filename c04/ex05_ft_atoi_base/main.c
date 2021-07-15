#include<stdio.h>

int ft_atoi_base(char *str, char *base);

int	return_index(char *base, char c);

int	main(void)
{
	char teste1[] = "      -++-+-----2147483648";
	char teste2[] = "      -++-+----2147483647";
	char teste3[] = "    a  -++-+----2147483648";
	char teste4[] = "      -++-+s----1337";
	char teste5[] = "   -----1337s1337";
	char teste6[] = "--+-70703";
	char teste7[] = "abca1";

	printf("%d\n", return_index("abca", 'c'));
	printf("Inteiro mínimo: %d\n", ft_atoi_base(teste1, "0123456789"));
	printf("Inteiro máximo: %d\n", ft_atoi_base(teste2, "0123456789"));
	printf("Teste de lixo: %d\n", ft_atoi_base(teste3, "0123456789"));
	printf("Teste de lixo: %d\n", ft_atoi_base(teste4, "0123456789"));
	printf("Teste de lixo: %d\n", ft_atoi_base(teste5, "0123456789"));
	printf("Teste de lixo: %d\n", ft_atoi_base(teste6, "0123456789"));
	printf("Teste de lixo: %d\n", ft_atoi_base(teste7, "abcdefghij"));
}
