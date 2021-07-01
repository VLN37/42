#include <stdio.h>
#include <stdlib.h>

int	multiply(int i)
{
	i *= 2;
	return (i);
}

int *ft_map(int *tab, int length, int(*f)(int));

int	main(void)
{
	int	array[5] = {1, 2, 3, 4, 5};
	int	(*ptr)(int);
	int	*newptr;
	int	i;

	i = -1;
	ptr = &multiply;
	newptr = ft_map(array, 5, ptr);
	while(i++ < 4)
		printf("pos %d = %d ", i, newptr[i]);
	printf("\n");
	free(newptr);
	newptr = 0;
	return (0);
}
