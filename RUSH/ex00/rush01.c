void	ft_putchar(char a);

void	ft_print(int x, char first, char mid, char last)
{
	ft_putchar(first);
	while (x > 2)
	{
		ft_putchar(mid);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(last);
	}
	ft_putchar('\n');
	return ;
}

void	rush (int x, int y)
{
	ft_print(x, '/', '*', '\\');
	while (y > 2)
	{
		ft_print(x, '*', ' ', '*');
		y--;
	}
	if (y > 1)
	{
		ft_print(x, '\\', '*', '/');
	}
	return ;
}
