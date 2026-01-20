NAME = Bureaucrat
CXXFLAGS = -Wall -Wextra -Werror
FILES =  main.cpp Bureaucrat.cpp Form.cpp
OBJS = $(FILES:.cpp=.o)
HEADER = Bureaucrat.hpp Form.hpp

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