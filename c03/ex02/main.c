#include<stdio.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char teste1[35] = "i like what?";
	char teste2[25] = "Bananas";
	printf("%s\n", ft_strcat(teste1, teste2));
}