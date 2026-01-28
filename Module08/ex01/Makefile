NAME = Span
CXXFLAGS = -Wall -Wextra -Werror
FILES = main.cpp Span.cpp
OBJS = $(FILES:.cpp=.o)
HEADER = Span.hpp

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