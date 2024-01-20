#include <iostream>


void walk(int steps);

int main(){
    // recursion = a programming technique where a function invokes itself within a 
    // breaks a complex concept into a repeatable single step

    // iterative vs recursive

    // less code + cleaner
    // useful for sorting and searching

    // uses more memory and slower
    walk(100);

    return 0;
}
void walk(int steps){
    for(int i = 0; i<steps; i++){
        std::cout<<"You took a step\n";
    }
}