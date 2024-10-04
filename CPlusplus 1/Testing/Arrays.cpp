#include <iostream>

int main()
{
    // Arrays = a type of data structure that can hold mulptiple values via an index number

    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    cars[0] = "Camaro";

    std::cout << cars[0] << '\n';

    return 0;
}