NAME = megaphone
CXXFLAGS = -Wall -Wextra -Werror
FILES =  megaphone.cpp
OBJS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
