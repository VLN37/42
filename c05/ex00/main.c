#include<stdio.h>

int ft_iterative_factorial(int nb);

int	main(void)
{
	int res;
	int	nb;

	nb = 7;
	printf("%d\n", ft_iterative_factorial(7));
	res = 1;
	while(nb > 1)
	{
		res = res * nb;
		printf("%d ", res);
		nb --;
	}

}
