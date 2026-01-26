NAME = Base
CXXFLAGS = -Wall -Wextra -Werror
FILES = Base.cpp
OBJS = $(FILES:.cpp=.o)
HEADER = Base.hpp

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