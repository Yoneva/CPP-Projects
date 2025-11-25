NAME = replacer
CXXFLAGS = -Wall -Wextra -Werror
FILES = main.cpp
OBJS = $(FILES:.cpp=.o)
HEADER = replacer.h

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