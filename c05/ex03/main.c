#include<stdio.h>
int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("10 elevado a zero deve ser 1 e é: %d\n", ft_recursive_power(10, 0));
	printf("0 elevado a zero deve ser 1 e é: %d\n", ft_recursive_power(0, 0));
	printf("0 elevado a 10 deve ser 0 e é: %d\n", ft_recursive_power(0, 10));
	printf("3 elevado a 3 deve ser 27 e é: %d\n", ft_recursive_power(3, 3));
}
