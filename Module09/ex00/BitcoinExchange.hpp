#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <iomanip>

std::map<std::string, float>& fill_map(std::map<std::string, float>& map, std::ifstream &file);
void	calculator(std::map<std::string, float>& map, std::ifstream &file);
