#include<stdio.h>
void	ft_swap(int *a, int *b);

int	main(void)
{
	int	x;
	int	y;
	int	*a;
	int	*b;

	x = 42;
	y = 24;
	printf("after assignment X is %d, Y is %d\n", x, y);
	a = &x;
	b = &y;
	printf("after pointer assignment *A is %d, *B is %d\n", *a, *b);
	ft_swap(a, b);
	printf("after function A is %d, B is %d\n", *a, *b);
}
