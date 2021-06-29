#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer;
	char	output[3000];
	int		i;

	printf("%d\n", argc);
	i = 0;
	if (argc == 1 || (argc == 2 && argv[1][0] == '-'))
	{
		while (read(0, output, 1) > 0)
			write(1, output, ft_strlen(output));
		output[i] = '\0';
		return (0);
	}
}
