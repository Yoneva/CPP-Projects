NAME = Materia
CXXFLAGS = -Wall -Wextra -Werror
FILES = main.cpp AMateria.cpp ice.cpp cure.cpp Character.cpp MateriaSource.cpp
OBJS = $(FILES:.cpp=.o)
HEADER = AMateria.hpp Character.hpp cure.hpp ice.hpp \
		 ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

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