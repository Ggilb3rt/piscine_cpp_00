#Coucou

NAME = account
STD = -std=c++98
FLAGS = -Wall -Wextra -Werror
COMPIL = clang++
SRC = tests.cpp Account.cpp
OBJ = $(SRC:%.cpp=%.o)

.PHONY : all

%.o: %.cpp
	$(COMPIL) $(FLAGS) $(STD) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPIL) $(FLAGS) $(STD) -o $@ $(OBJ)
	./$(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all