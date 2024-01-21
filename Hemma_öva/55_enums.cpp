#include <iostream>

// a datatype
enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};
// you dont have to declare that the values. Otherwise the first will be 0, second 1 and so on.
int main (){
    // enums = a user-defined data type that consists of paried named-integer constants
    // Great for potential options

    Day today = sunday;

    switch (today){
        case sunday: 
            std::cout << "Its sunday\n";
            break;
        case monday: 
            std::cout << "Its monday\n";
            break;
        case tuesday: 
            std::cout << "Its tuesday\n";
            break;
        case wednesday: 
            std::cout << "Its wednesday\n";
            break;
        case thursday: 
            std::cout << "Its thursday\n";
            break;
        case friday: 
            std::cout << "Its friday\n";
            break;
        case saturday: 
            std::cout << "Its saturday\n";
            break;


    }


}