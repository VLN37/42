#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include<unistd.h>
typedef int	t_bool;
enum {FALSE, TRUE};
# define SUCCESS 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(x) (x % 2 == FALSE)

#endif
