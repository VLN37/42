#include<stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	teste1[] = "1337MAS73R";
	char	teste2[] = "LEETMASTER";
	char	empty[1] = "";

	printf("%s\n", teste1);
	printf("%s\n", teste2);
	printf("O retorno deve ser 0 e é: %d\n", ft_str_is_alpha(teste1));
	printf("O retorno deve ser 1 e é: %d\n", ft_str_is_alpha(teste2));
	printf("Retorno vazio deve ser 1 e é: %d\n", ft_str_is_alpha(empty));
}

/*
-W]AqvPF39'B/P^/I+Q})Gzn:?X:[Y0,[Yq
+W]Aqvpf39'B/P^/I+Q})Gzn:?X:[Y0,[Yq

-8eJ
+8ej

-D3l^VW/#Vg9y:0Gs
+D3l^VW/#Vg9y:0gs

-)D_IG#Oeq
+)D_Ig#Oeq

-ReKt17+LOl MdR Mdr 4242l42
+Rekt17+Lol Mdr Mdr 4242l42

-ReKt17+LOl MdR Mdr 4242l42
+Rekt17+Lol Mdr Mdr 4242l42

-@Isso amxr
+@Isso Amxr

-NULL
+Null
*/

