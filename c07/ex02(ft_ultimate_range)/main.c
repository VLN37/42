#include<stdio.h>
int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	a;
	int	b;
	int *range;
	int	x;

	x = 0;
	a = 5;
	b = 10;
	printf("Range size should be 5 and is: %d", ft_ultimate_range(&range, a, b));
	printf("\n");
	//print test
	while (x < (b - a))
	{
		printf("%d ", range[x]);
		x++;
	}
	printf("\n");
}
