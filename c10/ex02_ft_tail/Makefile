SOURCES		= main.c

OBJECTS		= ${SOURCES:.c=.o}

NAME		= ft_cat

CC			= cc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${OBJECTS}
			${CC} ${CFLAGS} ${OBJECTS} -o ${NAME}

clean:
			${RM} ${OBJECTS}

fclean:		clean
			${RM} ${NAME}

.PHONY:		all clean fclean
