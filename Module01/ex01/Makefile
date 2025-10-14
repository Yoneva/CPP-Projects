NAME = ZombieHorde
CXXFLAGS = -Wall -Wextra -Werror
FILES =  Zombie.cpp zombieHorde.cpp main.cpp
OBJS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean