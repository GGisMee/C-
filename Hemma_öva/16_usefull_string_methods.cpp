#include <iostream>
std::string func(){
    std::cout << "Enter name: ";
    std::string name;
    std::getline(std::cin, name);
    if(name.length() > 25){ // Detects the length of the string
        std::cout << "Your name is too long and won't fit bc " << name.length() << ">25\n";
        return func();
    }
    else if (name.empty()){ // Detects wether the string is empty or not
        std::cout<<"Name not entered"<<std::endl;
        return func();
    }
    return name;
    }

int main() {    
    std::string name = func();
    std::cout << name;

    name.append("@gmail.com");
    std::cout<<"Your username is now: "<<name<<std::endl;

    name.insert(0, "Junior "); // Inserts characters at an index
    std::cout<<"You are the "<<name<<std::endl;

    std::cout << name.find(' '); // returns a whitespace at index...

    name.erase(8,-1); // erases between the first and second index
    std::cout<<name;

    name.clear(); // deletes the information on the string
    std::cout<<name;

    
}