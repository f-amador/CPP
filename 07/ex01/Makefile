NAME = iter
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = ex01.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

Phony: all clean fclean re