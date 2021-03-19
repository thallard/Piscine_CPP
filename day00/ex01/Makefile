NAME		:= PhoneBook
OBJ_DIR		:= ./obj
SRC			:=	PhoneBook.cpp \
				classes/Contact.cpp \
				Utilities.cpp

OBJ			:= $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))
CXX			:= clang++
CXXFLAGS	:= -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/classes

$(OBJ_DIR)/%.o:%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory