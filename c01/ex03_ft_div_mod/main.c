#include<unistd.h>
#include<stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 100;
	b = 50;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("A = 100 B = 50\ndivisão = %d\nmódulo = %d\n", *div, *mod);
}
