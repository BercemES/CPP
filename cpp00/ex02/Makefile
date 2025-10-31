NAME		= account

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC			=  tests.cpp Account.cpp

OBJ 		= $(SRC:.cpp=.o)

RESET			= \033[0m
RED				= \033[31m
GREEN			= \033[0;32m
YELLOW			= \033[0;33m
BLUE			= \033[0;34m

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo "$(GREEN)\n✅ minishell compiled successfully.$(RESET)"

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo "$(RED)🧹 Object files cleaned.$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)🧽 Executable file cleaned.\n$(RESET)"

re: fclean all

.PHONY: all clean fclean re