NAME		=	MutantStack

CXX			=	c++
CXX_FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp
OBJ 		=	$(SRC:.cpp=.o)

RESET			= \033[0m
RED				= \033[31m
GREEN			= \033[0;32m
YELLOW			= \033[0;33m
BLUE			= \033[0;34m

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXX_FLAGS) -o $(NAME) $(OBJ)
	@echo "$(GREEN)\n✅ cpp08-ex02 compiled successfully.$(RESET)"
	rm -f $(OBJ)
	@echo "$(RED)🧹 Object files cleaned.$(RESET)"

%.o: %.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo "$(RED)🧹 Object files cleaned.$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)🧽 Executable file cleaned.\n$(RESET)"

re: fclean all

.PHONY: all clean fclean re