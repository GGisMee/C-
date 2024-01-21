#include <iostream>

int main(){
    int *pointer = nullptr; // creting the pointer 
    // can also do int *pointer;
    int x =123;

    pointer = &x;

    if (pointer == nullptr){
        std::cout<< "pointer not assigned to adress";
    }
    else {
        std::cout<<"pointer assigned to adress";
    }
    std::cout<<*pointer;


}