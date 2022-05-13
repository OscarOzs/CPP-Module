#include <iostream>


int main(void)
{
	char	buffer[500];

	std::cout << "Hello World" << std::endl;
	
	std::cout << "Input a word : ";
	std::cin >> buffer;
	std::cout << "You entered : [" << buffer << "]" << std::endl;

	return (0);
}