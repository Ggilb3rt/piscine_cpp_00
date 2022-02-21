#Coucou

NAME = megaphone
STD = -std=c++98
FLAGS = -Wall -Wextra -Werror
COMPIL = c++
SRC = megaphone.cpp
OBJ = $(SRC:%.cpp=%.o)

.PHONY : all clean fclean re test

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

test : all
	./$(NAME) "shhhhh... I think the students are asleep..."
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	./$(NAME)
