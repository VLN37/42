#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

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
	char string[6][50] ={
						"just sight seeing",
						"banaaaaaaaaaaaanas",
						"idk what im doing at all",
						"if norminette passes this i'll be surprised",
						"hello DOODS",
						};
	printf("%s\n", string[1]);
	printf("%d\n", string[5][0]);
	printf("%d\n", ft_strlen(string[0]));
	return (0);
}
