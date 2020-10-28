NAME = rush-02 
SRCS =	main.c \
		ft/ft_str.c \
		ft/ft_error.c \
		ft/ft_split.c \
		ft/ft_strjoin.c \
		ft/ft_atoi.c \
		ft/ft_dict/ft_checkdict.c \
		ft/ft_dict/ft_opendict.c \
		ft/ft_dict/ft_dictochar.c \
		ft/ft_dict/ft_gettext.c \
		ft/ft_dict/ft_initstruct.c \
		ft/ft_output.c \
		ft/ft_find.c \
		ft/ft_input.c
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJS}
		${CC} ${CFLAGS} $^ -o $@ -g

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I./includes -g

all: ${NAME}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
