#include <iostream>

int main()
{
    // Using logical operators

    int temp;
    bool sunny = true;

    std::cout << "Enter a temperature: ";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30){
        std::cout << "The tempature is bad\n";
    }
    else{
        std::cout << "The temparature is nice \n";
    }

    if(!sunny){
        std::cout << "It is cloudy outside \n";
    }
    else{
        std::cout << "It is sunny outside \n";
    }

    return 0;
}