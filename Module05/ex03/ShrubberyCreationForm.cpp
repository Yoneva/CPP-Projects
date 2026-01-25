#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137), target("default"){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm &other){
	if (this != &other){
		target = other.target;
		AForm::operator=(other);
	}
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation Form", 145, 137), target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), target(other.target){}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
	if (!getStatus())
		throw FormNotSignedException();
	if (executor.getGrade() > getEgrade())
		throw GradeTooLowException();

	std::ofstream file(getName() + "_shrubbery");
	if (!file.is_open())
		throw std::runtime_error("Could not create file");

	file << "         v .   ._, |_  .,\n";
	file << "      `-._\\/  .  \\ /    |/_\n";
	file << "          \\\\  _\\, y | \\//\n";
	file << "    _\\_.___\\\\, \\\\/ -.\\||\n";
	file << "      `7-,--.`._||  / / ,\n";
	file << "      /'     `-. `./ / |/_.')\n";
	file << "                |    |//\n";
	file << "                |_    /\n";
	file << "                |-   |\n";
	file << "                |   =|\n";
	file << "                |    |\n";
	file << "   -------------^----------\n\n";
	
	file << "          &&& &&  & &&\n";
	file << "      && &\\/&\\|& ()|/ @, &&\n";
	file << "      &\\/(/&/&||/& /_/)_&/_&\n";
	file << "   &() &\\/&|()|/&\\/ '%\" & ()\n";
	file << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
	file << "&&   && & &| &| /& & % ()& /&&\n";
	file << " ()&_---()&\\&\\|&&-&&--%---()~\n";
	file << "     &&     \\|||\n";
	file << "             |||\n";
	file << "             |||\n";
	file << "             |||\n";
	file << "       , -=-~  .-^- _\n\n";
	
	file << "            ^\n";
	file << "           ^^^\n";
	file << "          ^^^^^\n";
	file << "         ^^^^^^^\n";
	file << "        ^^^^^^^^^\n";
	file << "       ^^^^^^^^^^^\n";
	file << "      ^^^^^^^^^^^^^\n";
	file << "         ||||||\n";
	file << "         ||||||\n\n";
	
	file << "      /\\\n";
	file << "     /  \\\n";
	file << "    /    \\\n";
	file << "   /~~~~~~\\\n";
	file << "  /        \\\n";
	file << " /          \\\n";
	file << "/____________\\\n";
	file << "     ||||\n";
	file << "     ||||\n";
	
	file.close();
}
