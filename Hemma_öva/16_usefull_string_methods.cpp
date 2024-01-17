#include <iostream>
std::string func(){
    std::cout << "Enter name: ";
    std::string name;
    std::getline(std::cin, name);
    if(name.length() > 25){
        std::cout << "Your name is too long and won't fit bc " << name.length() << ">25\n";
        return func();
    }
    return name;
    }

int main() {    
    std::string name = func();
    std::cout << name;



}