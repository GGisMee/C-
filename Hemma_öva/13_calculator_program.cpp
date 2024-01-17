# include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "------------- Calculator -------------";
    std::cout << "\nEnter the operation type (+-*/)\n";
    std::cin >> op;
    std::cout << "Enter number 1:";
    std::cin >> num1;
    std::cout << "Enter number 1:";
    std::cin >> num2;
    std::cout << "The resulting answer from " << num1 << op << num2 << " = ";
    switch(op) {
        case '+':
            std::cout << num1+num2;
            break;
        case '-':
            std::cout << num1-num2;
        case '*':
            std::cout << num1*num2;
        case '/':
            std::cout << num1/num2;
    }

    std::cout << "\n--------------------------------------";
    return 0;
}