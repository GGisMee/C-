#include <iostream>

class Human{
    public:
        std::string name = "Rick"; // predecide what a variable will be
        std::string occupation;
        int age;

        void eat(){
            std::cout<<"This person is eating";
        }
        void drink(){
            std::cout<<"This person is drinking";
        }
        void sleep(){
            std::cout<<"This person is sleeping";
        }

};


int main (){
    //object = A collection of attributes and methods
    //         Charicteristics and could perform actions
    //         Can be used to mimic real world items
    //         Created from a class which acts a "blue print"

    Human person1;
    person1.name = "Miguel de Cervantes";
    person1.age = 17;
    person1.drink();


}