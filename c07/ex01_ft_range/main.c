#include<stdio.h>
int *ft_range(int min, int max);

int	main(void)
{
	int	a;
	int	b;
	int	i;

	a = 5;
	b = 10;
	i = 0;
	int *range = ft_range(a, b);
	while (range[i] != '\0')
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
}
