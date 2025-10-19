NAME = Violence
CXXFLAGS = -Wall -Wextra -Werror
FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
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