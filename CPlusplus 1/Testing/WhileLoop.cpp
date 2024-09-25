#include <iostream>

int main()
{
    // Testing out while loops
    
    // std::string name;
    // while(name.empty()){
    //     std::cout << "Enter your name: ";
    //     std::getline(std::cin, name);
    // }

    // std::cout << "Hello " << name << " and welcome to my program";

    // Testing out do while loops

    int number;

    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The # is: " << number;


    return 0;
}