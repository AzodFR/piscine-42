NAME = bsq 
SRCS = main.c \
	   ft/cleaner_tab.c \
	   ft/map_convert.c \
	   ft/just_line_read.c \
	   ft/search_char.c \
	   ft/solve.c \
	   ft/solve2.c \
	   ft/lib/ft_atoi.c \
	   ft/lib/ft_split.c \
	   ft/lib/ft_strlen.c \
	   ft/lib/ft_putstr.c \
	   ft/lib/ft_strdup.c  \
	   ft/lib/ft_strjoin.c 
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJS}
		${CC} ${CFLAGS} $^ -o $@ -I./includes/ -g

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I./includes/ -g

all: ${NAME}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
