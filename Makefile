SRCS = ft_isalpha.c ft_isdigit.c ft_strlen.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strchr.c ft_strrchr.c
OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

.c.o:
	gcc ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

so:
	gcc -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re