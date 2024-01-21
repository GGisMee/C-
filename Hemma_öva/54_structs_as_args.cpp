#include <iostream>

struct Airplane{
    std::string model;
    int year;
    std::string color;
};
void printAirplane(Airplane airplane);
void ColorChangeAirplane(Airplane &airplane, std::string color);

int main(){    
    // struct = A structure that group related variables under one name
    // It can contain many different data types (string, int, double, bool, etc)
    // variables within the struct are known as members

    Airplane Airplane1;
    Airplane1.model = "Cessna";
    Airplane1.year = 1996;
    Airplane1.color = "blue";


    Airplane Airplane2;
    Airplane2.model = "Tunnan";
    Airplane2.year = 1942;
    Airplane2.color = "gray";


    //printAirplane(Airplane2); // rn we are creating a copy of Airplane2 and naming it airplane 
    // they have different adresses

    ColorChangeAirplane(Airplane2, "blue"); // rn we are use the same adress
    std::cout<<Airplane2.color;
}

void printAirplane(Airplane airplane){ 
    std::cout<<airplane.model << "\n";
    std::cout<<airplane.year << "\n";
    std::cout<<airplane.color << "\n";
}

void ColorChangeAirplane(Airplane &airplane, std::string color){ 
    airplane.color = color;
}