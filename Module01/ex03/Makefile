NAME = Violence
CXXFLAGS = -Wall -Wextra -Werror 
FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(FILES:.cpp=.o)
HEADER = HumanA.hpp HumanB.hpp Weapon.hpp

all : $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) $(FLAGS) -o $(NAME)

%.o: %.cpp $(HEADER)
	c++ $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean