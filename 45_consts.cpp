#include <iostream>

void printInfo(const std::string x, const std::string y);

int main()
{
    // const parameters = parameters which are read only
    // they are more secure + conveys intent
    // useful for refernces and pointers
    std::string x = "Kool-Aid";
    std::string y = "Water";

    printInfo(x,y); 
    

    
    
}

void printInfo(const std::string x, const std::string y){
    x = "Something else"; // Error because constants cant be changed
    y = "No longer Water lol";
    std::cout<<"X: "<<x<<"\n";
    std::cout<<"Y: "<<y<<"\n";

}
