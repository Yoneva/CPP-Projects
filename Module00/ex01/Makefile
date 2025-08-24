NAME = Phone
CXXFLAGS = -Wall -Wextra -Werror
FILES =  Contact.cpp Phonebook.cpp main.cpp
OBJS = $(FILES:.cpp=.o)
HEADER = Phonebook.hpp Contact.hpp

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	c++ $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean