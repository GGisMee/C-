#include <iostream>


void walk(int steps);
void walk2(int steps);
void factorial_loop(const int startnum, int *pNum);
void factorial_req(int current_num, int *pNum);

int main(){
    // recursion = a programming technique where a function invokes itself within a 
    // breaks a complex concept into a repeatable single step

    // iterative vs recursive

    // less code + cleaner
    // useful for sorting and searching

    // req uses more memory and slower
    
    // loop
    // walk(100);

    // recursion
    //walk2(100);

    int Num = 4;
    int *pNum = &Num;

    //factorial_loop(Num, pNum);

    factorial_req(Num-1, pNum);

    std::cout<<Num;

    return 0;
}
void walk(int steps){
    for(int i = 0; i<steps; i++){
        std::cout<<"You took a step\n";
    }
}
void walk2(int steps){
    if (steps>0){ // the criteria which stops the recursion
        std::cout << "You took a step\n";
        walk2(steps-1); // invoking the function within itself
    }
}

void factorial_loop(const int startnum, int *pNum){
    for(int i = startnum-1; i!=1; i--){
        *pNum *= i;
    }
}
void factorial_req(int current_num, int *pNum){
    std::cout<<*pNum<<" "<< current_num<<"\n";

    if (current_num!=1){ // the criteria which stops the recursion
        *pNum *= current_num;
        factorial_req(current_num-1, pNum); // invoking the function within itself
    }
}