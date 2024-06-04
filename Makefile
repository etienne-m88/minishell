##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## minishell
##

SRC	=	src/main.c \
		src/flag1.c \
		src/flag2.c \
		src/flag3.c \
		src/my_putchar.c \
		src/my_put_nbr.c \
		src/my_put_nbr_binary.c \
		src/my_put_nbr_deci.c \
		src/my_put_nbr_float.c \
		src/my_put_nbr_hexa.c \
		src/my_put_nbr_hexa2.c \
		src/my_put_nbr_long_int.c \
		src/my_put_nbr_octal.c \
		src/my_put_nbr_pointeur.c \
		src/my_putstr.c \
		src/my_strlen.c \
		src/printf.c \
		src/my_strcmp.c \
		src/my_strdup.c \
		src/my_strcat.c \
		src/my_strcpy.c \
		src/functions.c \
		src/env.c \
		src/my_strncmp.c \
		src/my_str_to_word_array.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

CFLAGS	=	-W -Wall -Wextra
CFLAGS 	+=	-g

all: 	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f *log
	rm -f $(wildcard *~)
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
