#include<stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char teste1[35] = "i like what?";
	char teste2[25] = "Bananas,strawberries";
	printf("%s\n", teste1);
	printf("%s\n", ft_strncat(teste1, teste2, 1));
	printf("%s\n", ft_strncat(teste1, teste2, 15));
}
