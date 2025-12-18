NAME = Fixed
CXXFLAGS = -Wall -Wextra -Werror -fsanitize=
FILES =  Fixed.cpp main.cpp bsp.cpp Point.cpp
OBJS = $(FILES:.cpp=.o)
HEADER = Fixed.hpp Point.hpp

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
