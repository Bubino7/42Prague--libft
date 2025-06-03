NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME) test_program

re: fclean all

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o test_program
	./test_program
