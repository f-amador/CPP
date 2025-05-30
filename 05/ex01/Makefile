NAME = Form
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRC =  Bureaucrat.cpp Form.cpp main.cpp
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
