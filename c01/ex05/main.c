#include<stdio.h>
#include<unistd.h>

void	ft_putstr(char *str);

// iterate over string characters, write each character
int	main(void)
{
	char	*str;

	str = "Hello World ! !\n";
	printf("Expected: %s", str);
	ft_putstr(str);
	return (0);
}
