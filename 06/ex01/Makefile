NAME = Serializer
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g
SRC =  main.cpp Data.cpp Serializer.cpp 
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