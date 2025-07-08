NAME = Materia
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp Materia.cpp MateriaSource.cpp
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
