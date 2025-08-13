NAME = ft_tail
CC = cc
CFLAGS = -Wall -Werror -Wextra
INCLUDES = -Iincludes

SRC = main.c $(wildcard srcs/**/**.c)
OBJ = $(SRC:.c=o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -o $< $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

.PHONY: all clean fclean
