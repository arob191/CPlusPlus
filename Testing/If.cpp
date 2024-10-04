#include <iostream>


// Simple if statements
int main()
{
    int age;

    std::cout << "What is your age?: ";
    std::cin >> age;

    if(age < 0 or age > 122){ // Based on the oldest person to ever live
        std::cout << "Invalid age" << '\n';
    }
    else if(age >=18){
        std::cout << "You are an adult" << '\n';
    }
    else{
        std::cout << "You are a child" << '\n';
    }

    return 0;
}