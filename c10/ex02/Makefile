NAME = ft_tail
SRCS =	ft_tail.c ft_atoi.c ft_print.c ft_str_check.c ft_file_info.c
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJS}
		${CC} ${CFLAGS} $^ -o $@

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
