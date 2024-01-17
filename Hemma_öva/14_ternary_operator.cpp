#include <iostream>

int main(){
    // ternary operator is a replacement for if/else statements
    // Written: ** condition ? expression1 : expression2;
    int num1;
    int num2;
    std::cout << "Choose two numbers to compare\n";
    std::cin >> num1;
    std::cin >> num2;
    std::cout << "The biggest number out of the two is: ";
    int result = num1>num2 ? num1 : num2;
    std::cout << result;

    return 0;
}