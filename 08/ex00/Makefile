NAME = easyfind
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all

Phony: all clean fclean re