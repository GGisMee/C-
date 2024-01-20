#include <iostream>

int main()
{
    // memory adress = a location in memory where data is stored
    // a memory address can be accessed with & (address-of operator)

    std::string name = "Gus";
    int age = 21;
    bool student = true;

    std::cout<< &name<<"/n"; // display the adress of where the name is located in hexadecimal
    // similar to house adresses
    
}