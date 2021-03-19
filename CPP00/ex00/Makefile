SRC	= megaphone.cpp
OBJ	= megaphone.o

CLANG = clang++
FLAGS = -Wall -Wextra -Werror
NAME = megaphone

all: $(NAME)

%.o:%.c
	$(CLANG) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CLANG) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re