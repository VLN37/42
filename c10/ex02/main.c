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

int	ft_getbytecount(char *argv)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			res = (res * 10) + (argv[i] - '0');
		i++;
	}
	return (res);
}

int	ft_checkerrno(int fd)
{
	if (fd == -1)
	{
		write(1, strerror(errno), ft_strlen(strerror(errno)));
		return (1);
	}
	return (0);
}

int	logic(int bytes, char *argv)
{
	int		i;
	char	buffer;
	int		fd;

	i = 0;
	fd = open(argv, O_RDONLY);
	ft_checkerrno(fd);
	while (read(fd, &buffer, 1))
		i++;
	close(fd);
	fd = open(argv, O_RDONLY);
	ft_checkerrno(fd);
	while (i-- > bytes)
		read(fd, &buffer, 1);
	while (read(fd, &buffer, 1))
		write(1, &buffer, 1);
}

int	main(int argc, char **argv)
{
	int		bytes;
	int		j;
	char	buffer;

	j = 2;
	if (argc == 1 || (argc == 2 && argv[1][0] == '-' && argv[1][1] != 'c'))
	{
		while (read(0, &buffer, 1) > 0)
			1 == 1;
		return (0);
	}
	bytes = ft_getbytecount(argv[1]);
	while (j < argc)
	{
		if (argc > 3)
		{
			write(1, "==> ", 4);
			write(1, argv[j], strlen(argv[j]));
			write(1, " <==\n", 5);
			if (logic(bytes, argv[j]))
				return (1);
		}
		else
			if (logic(bytes, argv[j]))
				return (1);
		j++;
	}
}
