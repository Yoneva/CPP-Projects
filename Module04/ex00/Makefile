NAME = Zoo
CXXFLAGS = -Wall -Wextra -Werror
FILES =  main.cpp animal.cpp dog.cpp cat.cpp
OBJS = $(FILES:.cpp=.o)
HEADER = animal.hpp dog.hpp cat.hpp

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