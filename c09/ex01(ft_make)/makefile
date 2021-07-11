SOURCES	= ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
# SRCS	= $(wildcard ./srcs/ft_*.c)

#how to compile the lib with your files. Do i have to call the header?
#Do i have to pass the path to the header?

#gcc -Wall -Wextra - Werror -c ft* && ar rc libft.a *.o

#gcc -Wall -Wextra -Werror main.c -L. -lft -I ./includes/libft.h

OBJECTS	= ${SOURCES:.c=.o}

INCLUDE	= ./includes/

NAME	= libft.a

CC		= gcc
AR		= ar
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror
ARFLAGS	= rc

INDEX	= ranlib ${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDE}

all:		${OBJECTS}
			${AR} ${ARFLAGS} ${NAME} ${OBJECTS}

clean:
			${RM} ${OBJECTS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
