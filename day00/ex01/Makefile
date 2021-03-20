SRC	=	PhoneBook.cpp \
		classes/Contact.cpp \
		Utilities.cpp

OBJ_DIR	= ./obj
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))
CLANG = clang++
FLAGS = -Wall -Wextra -Werror
NAME = PhoneBook

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/classes

$(OBJ_DIR)/%.o:%.cpp
	$(CLANG) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ): includes/PhoneBook.hpp classes/Contact.hpp

all:	$(OBJ_DIR) $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re