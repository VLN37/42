#include <stdio.h>

void ft_putstr_non_printable(char *str);

int	main(void)
{
	int	i;
	char *str = "Hello\nWorld\x1f\f";
	char str2[33];

	i = 1;
	while (i < 32)
	{
		str2[i] = i;
		i++;
	}
	str2[0] = '\n';
	str2[i] = '\0';
	//str[0] = 10;
	ft_putstr_non_printable(str2);
	return (0);
}
