#include<iostream>


int main()
{
    std::string name;

    std::cout << "Input name: ";
    std::cin >> name;

    std::cout << "Hello world from " + name << std::endl;

    return 0;
}
