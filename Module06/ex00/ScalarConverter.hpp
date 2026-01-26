#pragma once

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <iomanip>


class ScalarConverter{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter& other);
		ScalarConverter&	operator=(ScalarConverter &other);
		~ScalarConverter();
	public:
		static void convert(std::string&);
};