
SRCS 	= srcs/ft_atoi.c srcs/ft_bzero.c srcs/ft_memchr.c srcs/ft_calloc.c srcs/ft_memcmp.c srcs/ft_isascii.c srcs/ft_isprint.c  srcs/ft_toupper.c  srcs/ft_tolower.c srcs/ft_isalpha.c srcs/ft_isdigit.c srcs/ft_isalnum.c srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_memset.c srcs/ft_strcat.c srcs/ft_strchr.c srcs/ft_strcmp.c srcs/ft_strcpy.c srcs/ft_strdup.c srcs/ft_strlcat.c srcs/ft_strlen.c srcs/ft_strncat.c srcs/ft_strncmp.c srcs/ft_strncpy.c srcs/ft_strnstr.c srcs/ft_strrchr.c srcs/ft_strlcpy.c srcs/ft_strstr.c

OBJS	= ${SRCS:.c=.o}

IDIR	= includes,

CC 		= gcc

NAME	= libft.a

FLAGS	=  -Wall -Wextra -Werror

.c.o:
		${CC} ${FLAGS} -I ${IDIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc libft.a ${OBJS}

all:		${NAME}

clean:
		rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re: 		fclean all

.PHONY: 	all clean fclean re
