#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int		descriptor;
	char	buffer;

	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	descriptor =  open(argv[1], O_RDONLY);
	if (descriptor == -1)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		return (1);
	}
	while (read(descriptor, &buffer, 1))
		write(1, &buffer, 1);
	close(descriptor);
	return (0);
}
