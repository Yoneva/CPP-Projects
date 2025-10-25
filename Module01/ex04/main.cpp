#include "replacer.h"

int	main(int ac, char **av)
{
	if (ac != 4 )
		return (1);
	std::ifstream inputStream(av[1]);
	std::ofstream outputStream("replaced.replace");
	if (!inputStream.is_open() || !outputStream.is_open())
	{
		std::cerr << "Couldn't open this file, try again!!" << std::endl;
		return (inputStream.close(), outputStream.close(), 1);
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty())
		return (std::cout << "s1 cant be empty\n", 1);
	int s1_len = s1.length();
	std::string str;
	bool flag = false;
	while (std::getline(inputStream, str))
	{
		while (1)
		{
			size_t index = str.find(s1);
			if (index != std::string::npos)
			{
				flag = true;
				str.erase(index, s1_len);
				str.insert(index, s2);
			}
			else
				break;
		}
		outputStream << str << std::endl;
	}
	inputStream.close();
	outputStream.close();
	if (!flag)
		return (std::cout << "S1 not found :/" << std::endl, 0);
	std::cout << "the replacement has been done, check the replaced file :3" << std::endl;
	return (0);
}
