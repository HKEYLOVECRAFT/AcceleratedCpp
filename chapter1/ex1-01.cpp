/*  
Chapter 1 Working with Strings
1.1 input
Ask for a person's name, and greet the person 
*/
#include <iostream>
#include <string>

int main()
{
	// ask for the person's name
	std::cout << "Please enter your first name: ";

	// read the name
	std::string name;		// define name
	std::cin >> name;		// read info

	// write a greeting
	std::cout << "Hello, " << name << "!" << std::endl;
	return 0;
}