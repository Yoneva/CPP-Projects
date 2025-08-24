NAME = logs
CXXFLAGS = -Wall -Wextra -Werror
FILES =  Account.cpp tests.cpp 
OBJS = $(FILES:.cpp=.o)
HEADER = Account.hpp

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	c++ $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean