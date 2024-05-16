#include <iostream>

int main() {
    // Declare a variable to store the user's name
    std::string name;

    // Prompt the user to input their name
    std::cout << "Input name: ";

    // Read the user's name from the standard input
    std::cin >> name;

    // Print a greeting message with the user's name
    std::cout << "Hello world from " + name << std::endl;

    return 0;
}
