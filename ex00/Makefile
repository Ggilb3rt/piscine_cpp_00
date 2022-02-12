#Coucou

NAME = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98
COMPIL = c++
SRC = megaphone.cpp

.PHONY : all test

all :
	$(COMPIL) $(FLAGS) $(SRC) -o $(NAME)

test :
	./$(NAME) "shhhhh... I think the students are asleep..."
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	./$(NAME)
