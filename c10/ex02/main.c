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
	while(argv[i])
	{
		if(argv[i] >= '0' && argv[i] <= '9')
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
		write(1, "\n", 1);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer;
	int		bytes;
	int		i;
	int		j;

	i = 0;
	if (argc == 1 || (argc == 2 && argv[1][0] == '-' && argv[1][1] != 'c'))
	{
		while (read(0, &buffer, 1) > 0)
			1 == 1;
		return (0);
	}
	bytes = ft_getbytecount(argv[1]);
	printf("%d\n", bytes);
	fd = open(argv[1], O_RDONLY);
	if (ft_checkerrno(fd));
		return(1);
	while (read(fd, &buffer, 1))
		i++;
	close(fd);
	printf("%d\n\n", i);
	fd = open(argv[1], O_RDONLY);
	if (ft_checkerrno(fd));
		return(1);
	while(i > bytes)
	{
		printf("%d\n", i);
		read(fd, &buffer, 1);
		i--;
	}
	while(read(fd, &buffer, 1))
		write(1, &buffer, 1);
	return(0);
}
