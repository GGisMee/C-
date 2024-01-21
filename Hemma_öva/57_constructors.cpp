#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    Student(std::string name, int age, double merits){ // These can be overloaded just as functions
        this->name = name; // simular to self.name = name in python
        this->age = age; 
        gpa = merits; // if the inp is different from the variable you dont have to use "this" 
                      // This is a bit nicer way to write it
    }
    void display(){
        std::cout<<name<<"\n";
        std::cout<<age<<"\n";
        std::cout<<gpa<<"\n";
    }
};

int main(){
    // constructor = special method that is automatically called when an object is instantiated
    // useful for assigning values to attrobutes as arguments
    // simular to __init__
    Student student1("Gus", 17, 22.5);
    Student student2("Adrian", 17, 15); // lsr
    student1.display();
    student2.display();

    

}