#include <iostream>

int main() {
    // && and
    // || or
    // ! not
    int var = 6;
    std::cout << 1 && 0;
    std::string result = !(0) ? "yes" : "no";
    std::cout << result;
    std::string result2 = ((0 && var) || !(0)) ? "yes" : "no";
    std::cout << result2;

    return 0;
}