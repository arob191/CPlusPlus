#include <iostream>
#include <ctime>

int main()
{
    //psuedo-random = Not truly random

    srand(time(NULL)); //Initialize the srand number generator // time(NULL) is the seed to provide the srand function

    int num = (rand() % 6) + 1; // This initializes our num variable using the random number generator. // % divedes the number by six if you wanted to simulate a 6 sided die. +1 to the remainder to have it generate numbers 1-6

    std::cout << num << '\n';

    return 0;
}