#include <iostream>
#include <string>

/*
If user gives two names for the first prompt (ex. Jesse Kiviniity)
Both strings go in the buffer,
that means the program does not need to stop to ask the user prompt
a second time because the seconds word will be given forward.
 
 Further, if no words are given, the program stops as it keeps on
 waiting for a new string
 
 Even further, if given 3 words, the program takes the first two
 for their respective places and the 3rd stays in the buffer
 until the last std::endl (which flushes the buffer)
 */
int main()
{
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name 
            << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name 
            << "; nice to meet you too!" << std::endl;
    return 0;
}