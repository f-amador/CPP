NAME=PmergeMe
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra --std=c++98 -g
SRC = main.cpp PmergeMe.cpp
OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)
DEPFLAGS = -MMD -MP
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ):
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)
	rm -rf $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: all
	@echo "Generating 10000 random numbers..."
	@./PmergeMe `shuf -i 1-10 -n 7 | tr '\n' ' '`

.PHONY: all clean fclean re

-include $(DEP)