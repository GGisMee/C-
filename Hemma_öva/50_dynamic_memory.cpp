#include <iostream>
void Ex1();
void Ex2();
int main(){

    // dynamic memory = Memory that is allocated after the program is already compiled and running
    // use the 'new' operator to allocate memory to the heap rather then stack

    // Useful when we are uncertain of how much memory will be used


    // Ex1();
    Ex2();
    return 0;
    
}

void Ex1(){
    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout<<"adress: " << pNum << '\n';
    std::cout<<"value: " << *pNum << '\n';

    delete pNum;

}

void Ex2(){
    char *pGrades = NULL;
    int size;
    std::cout << "How many grades to enter in?: ";
    std::cin >> size;
    pGrades = new char[5];

    for (int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i+1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }
    delete[] pGrades;
}