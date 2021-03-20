SRC	=	megaphone.cpp

OBJ_DIR	= ./obj
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))
CLANG = clang++
FLAGS = -Wall -Wextra -Werror
NAME = megaphone

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o:%.cpp
	$(CLANG) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJ)


all: $(OBJ_DIR) $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re