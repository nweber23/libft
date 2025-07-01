NAME = libft.a

SRCS = 

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror -I includes

RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean: clean
			${RM} ${NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re