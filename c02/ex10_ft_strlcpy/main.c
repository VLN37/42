#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	main(void)
{
	char str1[] = "helloguys";
	char str2[] = "copying";

	ft_strlcpy(str1, str2, ft_strlen(str2));
	printf("%d, %d", ft_strlen(str2), ft_strlcpy(str1, str2, ft_strlen(str2)));
}
