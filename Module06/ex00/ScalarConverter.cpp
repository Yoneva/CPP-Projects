#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter& other){((void)other);}
ScalarConverter&	ScalarConverter::operator=(ScalarConverter &other){((void)other);return (*this);}

bool specials(const std::string& input) {
    if (input == "nan" || input == "nanf") {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: nanf\n";
        std::cout << "double: nan\n";
        return true;
    }
    if (input == "+inf" || input == "+inff") {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: +inff\n";
        std::cout << "double: +inf\n";
        return true;
    }
    if (input == "-inf" || input == "-inff") {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: -inff\n";
        std::cout << "double: -inf\n";
        return true;
    }
    return false;
}

void	characters(double value){
	char c = 0;
	if (value >= 32 && value <= 126)
		c = static_cast<char>(value);
	else if (value < 0 || value > 127){
		std::cout << "char : impossible" << std::endl;
		return ;
	}
	if (std::isprint(c)){
		std::cout << "char : " << c << std::endl;
	}
	else{
		std::cout << "char : not displayable" << std::endl;
		return ;
	}
	return ;
}

void	ScalarConverter::convert(std::string& content){
	double value;
	if (specials(content))
		return ;
	if (content.length() == 1 && std::isprint(content[0]) && !std::isdigit(content[0])){
		value = static_cast<double>(content[0]);
	}
	else{
		char *end;
		value = std::strtod(content.c_str(), &end);
		if (*end != '\0' && *end != 'f') {
			return ;
		}
	}
	characters(value);
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min()){
		std::cout << "int : impossible" << std::endl;
	}
	else{
		std::cout << "int : "<< static_cast<int>(value) << std::endl;
  		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
  		std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
	}
}

int main(int ac, char** av){
	if (ac != 2){
		std::cout << "Usage: ./convert <literal>" << std::endl;
		return 1;
	}
	std::string value = av[1];
	ScalarConverter::convert(value);
}