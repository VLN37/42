void	ft_is_negative (int n);
#include<stdio.h>

int	main(void)
{
	int	n;

	
	n = 0;
	ft_is_negative(-1);
	printf("%d é  \n", n);
	ft_is_negative(0);
	printf("%d é  \n", n);
	ft_is_negative(1);
	printf("%d é  \n", n);
	

	return (0);
}
