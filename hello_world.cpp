#include <iostream>

int main() {
    // Name variable
    std::string name;

    // Offer to enter your name
    std::cout << "Input name: ";

    // Reading the name
    std::cin >> name;

    // Print  message with the user's name
    std::cout << "Hello world from " + name << std::endl;

    return 0;
}
