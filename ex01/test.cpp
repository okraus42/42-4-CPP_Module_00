
#include <iostream>

int main(void)
{
	std::string str_inp1;
	std::string str_inp2;
	std::string str_inp3;

	std::cout << "Enter the String 1:\n";
	std::getline(std::cin, str_inp1);
	std::cout << "String 1 is " << str_inp1 << std::endl;
	std::cout << "Enter the String 2:\n";
	std::getline(std::cin, str_inp2);
	std::cout << "String 2 is " << str_inp2 << std::endl;
	if (std::cin.eof()==1)
	{
		std::cerr << "Ctrl+D detected" << std::endl;
	}
	std::cout << "Enter the String 3:\n";
	std::getline(std::cin, str_inp3);
	std::cout << "String 3 is " << str_inp3 << std::endl;
	if (str_inp1 == str_inp2)
		std::cout << "Strings are equal" << std::endl;
	else
		std::cout << "Strings are not equal" << std::endl;
}