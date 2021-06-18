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
}

void	second_print(int x, char b, char space)
{
	ft_putchar(b);
	while (x > 2)
	{
		ft_putchar(space);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(b);
	}
	ft_putchar('\n');
}

void	last_print(int x, char k, char l)
	{
	ft_putchar(k);
	while (x > 2)
	{
		ft_putchar(l);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(k);
	}
	ft_putchar('\n');
}

void	rush (int x, int y)
{
	first_print(x, 'A', 'B');
	while (y > 2)
	{
		second_print(x, 'B', ' ');
		y--;
	}
	if (y > 1)
	{
		last_print(x, 'C', 'B');
	}	
}
