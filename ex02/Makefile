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

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) out

re: fclean all

test:
	./$(NAME) > out
	diff out 19920104_091532.log
	rm out