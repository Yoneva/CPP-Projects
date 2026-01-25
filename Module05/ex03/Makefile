NAME = Bureaucrat
CXXFLAGS = -Wall -Wextra -Werror
FILES =  main.cpp Bureaucrat.cpp AForm.cpp RobotomyRequestForm.cpp \
		 ShrubberyCreationForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJS = $(FILES:.cpp=.o)
HEADER = Bureaucrat.hpp AForm.hpp RobotomyRequestForm.hpp \
		 ShrubberyCreationForm.hpp PresidentialPardonForm.hpp Intern.hpp

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