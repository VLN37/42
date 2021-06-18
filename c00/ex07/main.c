#include<unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	main(void)
{
	int	x = 0;
	int	y = -2147483648;
	int	w = 2147483647;

	ft_putnbr(x);
	write(1, "\n", 1);
	ft_putnbr(y);
	write(1, "\n", 1);
	ft_putnbr(w);
	write(1, "\n", 1);

	return (0);
}
