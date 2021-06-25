#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	x;

	i = 0;
	range = 0;
	if (min >= max)
		return (range);
	range = malloc(sizeof(min) * (max - min));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	x = 0;
	while (range[x] != '\0')
	{
		printf("%d ", range[x]);
		x++;
	}
	printf("\n");
	return (range);
}
