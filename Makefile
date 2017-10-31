##
## Makefile for Makefile in /home/t3i/MY_FUNC
## 
## Made by NGO tri
## Login   <ngo_t@etna-alternance.net>
## 
## Started on  Tue Oct 24 08:59:13 2017 NGO tri
## Last update Wed Oct 25 09:05:06 2017 NGO tri
##

MY_FUNC =       libmy.a

SRC =           my_putchar.c \
		my_isneg.c \
		my_put_nbr.c \
                my_swap.c \
                my_putstr.c \
                my_strlen.c \
		my_getnbr.c \
                my_strcpy.c \
		my_strncpy.c \
                my_strcmp.c \
		my_strncmp.c \
		my_strcat.c \
		my_strncat.c \
		my_strstr.c \
		my_strdup.c \
		my_str_to_wordtab.c

OBJ =           $(SRC:.c=.o)
RM =            rm -f


all:	$(MY_FUNC)

$(MY_FUNC):	$(OBJ)
	ar rc -o $(MY_FUNC) $(OBJ)
	ranlib $(MY_FUNC)
clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(MY_FUNC)

re:    	fclean all

.PHONY:
