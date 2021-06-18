#include<stdio.h>

char *ft_strcapitalize(char *str);
int ft_isalpha (char c);
int	ft_str_is_numeric(char c);

int	main (void)
{
	char	teste1[] = "just sight seeing";
	char	teste2[] = "teST@inGw31rDCh4rs!@#";
	char	teste3[] = ")d_Ig#Oeq";

	printf("This is a test: %s\n", teste1);
	printf("Is first letter capitalized? %s\n", (ft_strcapitalize(teste1)));
	printf("Is first letter capitalized? %s\n", (ft_strcapitalize(teste2)));
	printf("Is first letter capitalized? %s\n", (ft_strcapitalize(teste3)));
}

/*
-W]AqvPF39'B/P^/I+Q})Gzn:?X:[Y0,[Yq
+W]Aqvpf39'B/P^/I+Q})Gzn:?X:[Y0,[Yq

-8eJ
+8ej

-D3l^VW/#Vg9y:0Gs
+D3l^VW/#Vg9y:0gs

-)D_IG#Oeq
+)d_Ig#Oeq

-ReKt17+LOl MdR Mdr 4242l42
+Rekt17+Lol Mdr Mdr 4242l42

-NULL
+Null
*/