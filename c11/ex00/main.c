#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int));

void	multiply(int i)
{
	printf("%d, ", i *= 2);
}

int	main(void)
{
	int	array[5] = {1, 2, 3, 4, 5};
	void	(*ptr)(int);

	ptr = &multiply;
	ft_foreach(array, 5, ptr);
}
