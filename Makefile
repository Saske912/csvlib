NAME=csvlib.a

HEADER=scvlib.h

SRC=column_pos.c \
	column_str_value.c \
	strcmp_end.c \
	ft_strndup.c

OBJ = $(SRC:.c=.o)

CFLAGS=-Wall -Wextra -Werror

all:$(NAME)

$(NAME):$(OBJ)
	ar -rc $@ $^
	ranlib $(NAME)

%.o: %.c $(HEADER)
	gcc -g -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
