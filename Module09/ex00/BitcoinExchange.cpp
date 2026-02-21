#include "BitcoinExchange.hpp"

bool	valid_date(const std::string& date) {
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return (false);

	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (month < 1 || month > 12 || day < 1 || day > 31)
		return (false);

	if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day > 30) return (false);
	}
	if (month == 2) {
		bool leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		if (day > (leap ? 29 : 28)) return (false);
	}
	return (true);
}

//lexicographical order
std::map<std::string, float>& fill_map(std::map<std::string, float>& map, std::ifstream &file){
	std::string string, date, value;
	std::getline(file, string);

	while (std::getline(file, string)){
		std::stringstream tmp(string);

		if (std::getline(tmp, date, ',')){
			if(std::getline(tmp, value)){
				map[date] = static_cast<float>(std::atof(value.c_str()));
			}
		}
	}
	return (map);
}

void	calculator(std::map<std::string, float>& map, std::ifstream &file){
	std::string string, date;
	if (!std::getline(file, string) || string != "date | value"){
		std::cout << "Error: wrong header format" << std::endl;
		return ;
	}

	while (std::getline(file, string)){
		size_t pipe_pos = string.find('|');

		if (pipe_pos == std::string::npos){
			std::cout << "Error: bad input => " << string << std::endl;
			continue ;
		}

		date = string.substr(0 , pipe_pos - 1);
		if (!valid_date(date)){
			std::cout << "Error: bad input => " << date << std::endl;
			continue ;
		}
		float n = static_cast<float>(std::atof(string.substr(pipe_pos + 2).c_str()));
		if (n <= 0){
			std::cout << "Error: not a positive number." << std::endl;
			continue ;
		}
		else if (n > 1000){
			std::cout << "Error: too large a number." << std::endl;
			continue ;
		}

		std::map<std::string, float>::iterator it = map.lower_bound(date);
		
		if (it == map.end() || it->first != date){
			if (it == map.begin()){
				std::cout << "Error: bad input " << date << std::endl;
				continue ;
			}
			it--;
		}
		std::cout << date << " => " << n << " = " << (n * it->second) << std::endl;
	}
}

// Term		,What it represents					,Example

// begin()	,The location of the first entry.	,map.begin()
// first	,The Key (the date).				,it->first
// second	,The Value (the rate).				,it->second
