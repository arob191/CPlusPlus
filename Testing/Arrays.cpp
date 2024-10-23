#include <iostream>

int main()
{
    // Arrays = a type of data structure that can hold mulptiple values via an index number

    // std::string cars[] = {"Corvette", "Mustang", "Camry"};

    // std::cout << cars[0] << '\n';
    // std::cout << cars[1] << '\n';
    // std::cout << cars[2] << '\n';

    // cars[0] = "Camaro";

    // std::cout << cars[0] << '\n';

    // return 0;

    std::string classes[5];

    for(int i = 0; i < sizeof(classes)/sizeof(std::string); i++)
    {
        std::cout << "Please provide a class: ";
        std::getline(std::cin >> std::ws, classes[i]); //Used std::ws to ignore any spaces in the user answer
    }

    for(int i = 0; i < sizeof(classes)/sizeof(std::string); i++)
    {
        std::cout << classes[i] << "\n";
    }
}