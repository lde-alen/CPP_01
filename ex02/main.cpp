#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Value of string address   : " << &string << std::endl;
	std::cout << "Value of stringPTR address: " << stringPTR << std::endl;
	std::cout << "Value of stringREF address: " << &stringREF << std::endl;

	std::cout << "Value of original string  : " << string << std::endl; 
	std::cout << "Value of stringPTR string : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF string : " << stringREF << std::endl;
}
