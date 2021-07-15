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
	int		i;
	int		j;
	char	output[29000];

	i = 1;
	if (argc == 1 || (argc == 2 && argv[1][0] == '-'))
	{
		while (read(0, &buffer, 1) > 0)
			write(1, &buffer, 1);
		write(1, '\0', 1);
		return (0);
	}
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			write(2, strerror(errno), ft_strlen(strerror(errno)));
			write(2, "\n", 1);
			return (1);
		}
		while (read(fd, &buffer, 1))
		{
			output[j] = buffer;
			write(1, &output[j], 1);
			j++;
		}
		close(fd);
		i++;
	}
	write(1, '\0', 1);
	return (0);
}

// int	arraysize(int argc, char **argv)
// {
// 	int		i;
// 	int		size;
// 	int		fd;
// 	char	buffer;

// 	i = 1;
// 	size = 0;
// 	while (i < argc)
// 	{
// 		fd = open(argv[i], O_RDONLY);
// 		if (fd == -1 && argv[i][0] != '-')
// 		{
// 			write(2, strerror(errno), ft_strlen(strerror(errno)));
//			write(1, "\n", 1);
// 			return (1);
// 		}
// 		while (read(fd, &buffer, 1))
// 			size++;
// 		close(fd);
// 		i++;
// 	}
// 	return (size);
// }

//	int		size;
	// size = arraysize(argc, argv);
	// output = malloc(sizeof(buffer) * size);
	// free(output);
