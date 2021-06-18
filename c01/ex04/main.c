#include<stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

//divide and find the module of an operation using pointers
int	main(void)
{
	int	*a;
	int	*b;
	int	x;
	int	y;

	y = -5;
	x = 10;
	a = &y;
	b = &x;
	ft_ultimate_div_mod(a, b);
	printf("A = -5 B = 10\nA divisão de A e B é: %d\nO módulo de A e B é: %d\n", *a, *b);
}
