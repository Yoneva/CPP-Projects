NAME = RPN
CXXFLAGS = -Wall -Wextra -Werror
FILES = main.cpp RPN.cpp
OBJS = $(FILES:.cpp=.o)
HEADER = RPN.hpp

all : $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) $(CXXFLAGS) -o $(NAME)

%.o: %.cpp $(HEADER)
	c++ $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean