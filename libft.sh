
	gcc -Wall -Wextra -Werror -c srcs/*.c
	ar rcs libft.a *.o
    rm -f *.o	