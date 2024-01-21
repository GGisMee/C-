#include <iostream>

struct student{
    std::string name;
    double merit;
    bool enrolled; // currently in a course
};

int main(){    
    // struct = A structure that group related variables under one name
    // It can contain many different data types (string, int, double, bool, etc)
    // variables within the struct are known as members

    student student1;
    student1.name = "Lugdush";
    student1.merit = 22.5;
    student1.enrolled = false;

    student student2;
    student2.name = "Gamgi";
    student2.merit = 4.5;
    student2.enrolled = true;


    std::cout<<student1.name<<"\n";
    std::cout<<student1.merit<<"\n";
    std::cout<<student1.enrolled<<"\n";
    std::cout<<std::endl;
    std::cout<<student2.name<<"\n";
    std::cout<<student2.merit<<"\n";
    std::cout<<student2.enrolled<<"\n";

}
