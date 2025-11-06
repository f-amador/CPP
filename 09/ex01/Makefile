NAME=RPN
CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -g -std=c++98
SRC= main.cpp
OBJ= $(SRC:.cpp=.o)
DEP= $(OBJ:.o=.d)
DEPFLAGS = -MMD -MP
all:$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c  $< -o $@ 

clean:
	rm -rf $(OBJ)
	rm -rf $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

-include $(DEP)