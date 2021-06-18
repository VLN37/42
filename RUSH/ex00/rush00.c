void	ft_putchar(char a);

void	first_print(int x, char first, char mid)
{
	ft_putchar(first);
	while (x > 2)
	{
		ft_putchar(mid);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(first);
	}
	ft_putchar('\n');
	return ;
}

void	rush (int x, int y)
{
	first_print(x, 'o', '-');
	while (y > 2)
	{
		first_print(x, '|', ' ');
		y--;
	}
	if (y > 1)
	{
		first_print(x, 'o', '-');
	}
	return ;
}
