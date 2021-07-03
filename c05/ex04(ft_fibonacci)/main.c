#include<stdio.h>

int ft_fibonacci(int index);

int	main(void)
{	
	printf("%d\n", ft_fibonacci(-1));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(6));
	printf("%d\n", ft_fibonacci(7));
	printf("%d\n", ft_fibonacci(8));
	printf("%d\n", ft_fibonacci(9));
	printf("%d\n", ft_fibonacci(10));
	printf("%d\n", ft_fibonacci(11));
	printf("%d\n", ft_fibonacci(12));
	printf("%d\n", ft_fibonacci(13));
}
              
//	 0  ///// 0 ////// 0
// 1 + 0 =    1 ////// 1
// 0 + 1 =    1 ////// 1
// 1 + 1 =    2 ////// 2
// 1 + 2 =    3 ////// 3
// 2 + 3 =    5 ////// 4
// 3+  5 =    8 ////// 5
// 5 + 8 =    13 ///// 6
// 8 + 13 =    21 /////7
// 13 + 21 =   34 /////8
// 21 + 34  = 55 ///// 9
// 34 + 55  = 89 ///// 10
// 55 + 89  = 144 //// 11