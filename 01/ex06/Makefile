NAME = harlFilter
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g
SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o:%.cpp
	$(CC) $(CFLAGS) -c $<


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.Phony: all clean fclean re 
