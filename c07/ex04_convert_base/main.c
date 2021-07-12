#include <stdio.h>
#include <stdlib.h>

//validation functions
int	validate_base(char *base);
int	validate_nbr(char *str, int *ptrsign, int *ptri, char *base);
//returns size of the string
int	ft_strlen(char *str);
//returns the integer value of the provided character and base
int	return_index(char *base, char c);
//returns the integer value of the provided string on provided base
int	ft_atoi_base(char *str, char *base);
//converts from one base to the other
char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char *base_from = "0123456789ABCDEF";
	char *base_to = "01";

	char *nbr = "2A";
	printf("%d\n", ft_atoi_base(nbr, base_from));
	if (ft_convert_base(nbr, base_from, base_to) != NULL)
		printf("%s\n", ft_convert_base(nbr, base_from, base_to));
	else
		printf("String is null\n");

	char *base_from2 = "0123456789ABCDEF";
	char *base_to2 = "abc";

	char *nbr2 = "-7B4A33";
	printf("%d\n", ft_atoi_base(nbr2, base_from2));
	if (ft_convert_base(nbr, base_from2, base_to2) != NULL)
		printf("%s\n", ft_convert_base(nbr2, base_from2, base_to2));
	else
		printf("String is null\n");

	char *base_from3 = "0123456789ABCDEF";
	char *base_to3 = "";

	char *nbr3 = "-7B";
	printf("%d\n", ft_atoi_base(nbr3, base_from3));
	if (ft_convert_base(nbr, base_from3, base_to3) != NULL)
		printf("%s\n", ft_convert_base(nbr3, base_from3, base_to3));
	else
		printf("String is null\n");
}
