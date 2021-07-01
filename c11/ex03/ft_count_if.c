int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (tab[i])
	{
		counter += f(tab[i]);
		i++;
	}
	return (counter);
}
