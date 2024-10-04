#include <iostream>


int main()
{
    // Using the Ternary operator instead of if/else statements

    int grade = 75;
    grade >= 60 ? std::cout << "You pass! \n" : std::cout << "You fail! \n";

    int number = 9;
    number % 2 ? std::cout << "ODD \n" : std::cout << "EVEN \n";

    bool glassEmpty = false;
    glassEmpty ? std::cout << "Refil glass \n" : std::cout << "Take a sip \n"; 
    // Another way to type the above:
    std::cout << (glassEmpty ? "Refil glass \n" : "Take a sip \n");
    

    return 0;
}