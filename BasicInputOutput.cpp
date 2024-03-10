#include <iostream>
#include <string>

int main()
{
	std::string name = "";
	std::string country = "";

	std::cout << "Please enter your name: ";
	std::getline(std::cin, name);

	std::cout << "Please enter your country: ";
	std::getline(std::cin, country);

	std::cout << "Hello " << name << " from " << country << std::endl;
	std::cout << "Nice to meet you!" << std::endl;
}