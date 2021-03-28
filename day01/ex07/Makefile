SRC	= replace.cpp

OBJ_DIR	= ./obj
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))
CLANG = clang++
FLAGS = -Wall -Wextra -Werror
NAME = replace

	

$(OBJ_DIR)/%.o:%.cpp
	mkdir -p $(OBJ_DIR)
	$(CLANG) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ) $(OBJ_DIR)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME) $(OBJ)
	echo "I like something\nYou like me Like\nYou like someone else" > text

clean:
	rm -rf $(OBJ_DIR)
	rm -rf text text.replace

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re