#include <iostream>

int main(){
    // pointers = variable that stores a memory address of another variable
    //            sometimes easier than working with the adress.

    // exempel
    // Jag har 20 pizzor som jag ska dela ut
    // I stället för att gå ut till varje persons hem berättar jag var pizzan är.

    // & adress-of operator
    // * dereference operator

    std::string name = "Gus";
    int age = 21;
    std::string freePizzas[5] = { "pizza1", "pizza2", "pizza3", "pizza4", "pizza5"}; // redan en adress

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas; // behöver ej & då redan adress

    // nu säger jag att pName eller pointer to name är en pointer med *
    // och att den är adressen till name

    std::cout << *pName << std::endl;
    std::cout << *pAge << std::endl;
    std::cout << freePizzas << std::endl;

    return 0;
};