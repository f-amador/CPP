NAME = Bureaucrat
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Bureaucrat.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.Phony: all clean fclean re 
