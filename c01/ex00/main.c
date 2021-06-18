#include<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	i;
	int	*nbr;

	i = 24;
	nbr = &i;
	printf("O número no original é: %d\n", *nbr);
	ft_ft(nbr);
	printf("O número após ft_ft é: %d\n", *nbr);
}
