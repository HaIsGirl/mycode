#include <iostream>
#include <string>

int main() {
    int number = 42;
    std::string numberString = std::to_string(number);
    std::cout << "The number as a string: " << numberString << std::endl;
    return 0;
}
