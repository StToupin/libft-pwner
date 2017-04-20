CC = gcc
CFLAGS = -Wall -Werror -Wextra -O2

all: test

test: test_print.c test_equal.c test_bruteforce.c test_ft_memset.c test_ft_bzero.c test_ft_memcpy.c test_ft_memccpy.c test_ft_memmove.c test_ft_memchr.c test_ft_memcmp.c test_ft_strlen.c test_ft_strdup.c test_ft_strcpy.c test_ft_strncpy.c test_ft_strcat.c test_ft_strncat.c test_ft_strlcat.c test_ft_strchr.c test_ft_strrchr.c test_ft_strstr.c test_ft_strnstr.c test_ft_strcmp.c test_ft_strncmp.c test_ft_atoi.c test_character_functions.c test.c 
	$(CC) -o $@ $^ -L. -lft $(CFLAGS)

clean:

fclean: clean
	rm -f test

re: fclean all
