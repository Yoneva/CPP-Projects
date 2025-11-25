NAME = Harl2.0
CXXFLAGS = -Wall -Wextra -Werror
FILES = Harl.cpp main.cpp
OBJS = $(FILES:.cpp=.o)
HEADER = Harl.hpp

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