// void	ft_sortparams(char *argv, int size)
// {
// 	while (i < size)
// 	{
// 		if (argv[i] > argv[i + 1])
// 		{
// 			buffer = argv[i];
// 			argv[i] = argv[i + 1];
// 			argv[i + 1] = buffer;
// 			ft_sortparams(argv, size);
// 		}
// 	}
// }

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

// int	main(int argc, char **argv)
// {
// 	char	buffer;
// 	int		i;
// 	int		j;
// 	int		size;

// 	j = 0;
// 	i = 0;
// 	buffer = 0;
// 	size = ft_strlen(argv);
// 	while (i < size)
// 	{
// 		if (argv[i] > argv[i + 1])
// 		{
// 			buffer = argv[i];
// 			argv[i] = argv[i + 1];
// 			argv[i + 1] = buffer;
// 			ft_sortparams(argv, size);
// 		}
// 	}
// 	i++;
// 	while (argv[j] != 0)
// 	{
// 		printf("%d ", argv[j]);
// 	}
// }
