NAME = ClapTrap
CXXFLAGS = -Wall -Wextra -Werror
FILES =  ClapTrap.cpp main.cpp
OBJS = $(FILES:.cpp=.o)
HEADER = ClapTrap.hpp

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
