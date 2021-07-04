#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int));

void	multiply(int i)
{
	printf("%d ", i *= 2);
}

int	main(void)
{
	int	i;
	int	array[] = {1, 2, 3, 4, 5};
	void	(*ptr)(int);

	i = 0;
	ptr = &multiply;
	while(array[i] <= 5)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n Next line should multiply by 2\n");
	ft_foreach(array, 5, ptr);
	printf("\n");
	return (0);
}
