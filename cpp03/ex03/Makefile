NAME		= DiamonTrap

C++			= c++
C++_FLAGS	= -Wall -Wextra -Werror -std=c++98

SRC			= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ 		= $(SRC:.cpp=.o)

RESET			= \033[0m
RED				= \033[31m
GREEN			= \033[0;32m
YELLOW			= \033[0;33m
BLUE			= \033[0;34m

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(C++_FLAGS) -o $(NAME) $(OBJ)
	@echo "$(GREEN)\n✅ cpp03 compiled successfully.$(RESET)"

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo "$(RED)🧹 Object files cleaned.$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)🧽 Executable file cleaned.\n$(RESET)"

re: fclean all

.PHONY: all clean fclean re