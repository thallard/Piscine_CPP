SRC	= PhoneBook.cpp classes/Contact.cpp
OBJ	= PhoneBook.o classes/Contact.o

INC = includes/PhoneBook.hpp includes/Contact.hpp
CLANG = clang++
FLAGS = -Wall -Wextra -Werror
NAME = PhoneBook

all: $(NAME)

%.o:%.c
	$(CLANG) $(FLAGS) $(INC) -o $@ -c $<

$(NAME): $(OBJ)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re