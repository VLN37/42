#include<stdio.h>

int ft_str_is_numeric(char *str);

int	main(void)
{
	char teste1[] = "123123123";
	char teste2[] = "Hello World";
	char	empty[1] = "";
	
	printf("%s\n", teste1);
	printf("%s\n", teste2);
	printf("O retorno deve ser 1 e é: %d\n", ft_str_is_numeric(teste1));
	printf("O vazio deve ser 0 e é: %d\n", ft_str_is_numeric(teste2));
	printf("Retorno vazio deve ser 1 e é: %d\n", ft_str_is_numeric(empty));
}
