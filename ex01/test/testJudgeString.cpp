#include <iostream>
#include <string>
// #include <cstdlib> // exit関数のため

#define GREEN "\033[32m"
#define RED "\033[31m"
#define DEFAULT "\033[0m"

void testJudgeString(const std::string& expected, const std::string& output)
{
	if (expected == output)
		std::cout << GREEN << "OK" << DEFAULT << std::endl;
	else
	{
		std::cout << RED << "KO" << DEFAULT << std::endl;
		std::cout << "EXPECTED: " << expected << std::endl;
		std::cout << "OUTPUT  : " << output << std::endl;
		std::exit(1);
	}
}
