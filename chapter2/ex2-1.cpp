#include <iostream>
#include <string>

int main ()
{
    // ask for the person's name
    std::cout << "Please enter your first name: ";

    // read the name
    std::string name;
    std::cin >> name;

    // build the message that we intend to write
    const std::string greeting = "Hello, " + name + "!";

    // the number of blanks surrounding the greeting
    const int pad = 1;

    // total number of rows to write
    const int rows = pad * 2 + 3;

    // separate the output from the input
    std::cout << std::endl;

    // invariant: we have written r rows so far
    int r = 0;

    // so setting r to 0 makes the invariant true
    while (r != rows)
    {
        // writing a row of output makes the invariant false (as there is now 1 row, but invariant claims it is 0)
        std::cout << std::endl;

        // incrementing r makes the invariant true again
        ++r;
    }
    // we can conclude here that the invariant is true here

    
    return 0;
}