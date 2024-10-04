#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() 
{
    std::string name;
    int age;

    // If we want to extract the entire string provided by the user instead of stoping at the first space
    std::cout << "What is your full name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << '\n';


    return 0;
}