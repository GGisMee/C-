#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout<<"This animal is eating\n";
    }
};

class Dog : public Animal{
    public: 

    void bark(){
        std::cout<<"The dog just barked: Woof";
    }
};


class Shape{
    public:
        double area;
        double volume;
};
class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side*side*6;
        this->volume = side*side*side;
    }
};

class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4*3.14159265*radius*radius;
        this->volume = area/3*radius;

    }
        
};

int main() {
    // inheritance = A class can reciebe attributes and methods from another class
    // Children classes inherit from parent class
    // Helps to reuse similar code used in meny classes

    Dog dog;
    dog.eat(); // The dog inherited the eat method + the attribute alive
    dog.bark();
    return 0;
}