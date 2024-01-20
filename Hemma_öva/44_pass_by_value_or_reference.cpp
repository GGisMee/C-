#include <iostream>

void swap(std::string x, std::string y);
void swap_with_adresses(std::string &x, std::string &y);

int main()
{
    // pass by value or reference

    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x,y); // skapar kopior av x och y som används i funktionen, man ger funktionen själva värdet av x och y 
    // om man istället vill ändra själva variabeln måste man använda dens adress
    
    swap_with_adresses(x, y);

    std::cout<<"X: "<<x<<"\n";
    std::cout<<"Y: "<<y<<"\n";
    
}

void swap(std::string x, std::string y){
    // using a temporary variable
    std::string temp;
    temp = x;
    x=y;
    y=temp;

}

void swap_with_adresses(std::string &x, std::string &y){ // att använda adresser är mer minneseffektivt och borde användas oftare
    // using a temporary variable
    std::string temp;
    temp = x;
    x=y;
    y=temp;

}