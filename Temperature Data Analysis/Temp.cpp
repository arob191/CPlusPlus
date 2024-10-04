#include <iostream>

//Declare Global constants
const int ARRAY_SIZE = 7;

// Create our functions:
// Function to calculate the average temperature
double calculateAverageTemperature(const double temperatures[], int size)
{
    double average; // Set our average variable to return

    for(int i = 0; i > ARRAY_SIZE; i++){
        average += temperatures[i]; // Find the sum of the temps
    }

    average / ARRAY_SIZE; // Divide by array size

    return average; // Return our average
}

// // Function to find the highest temperature
// double findHighestTemperature(const double temperatures[], int size)
// {
//     std::cout >> "find highest temp";
// }

// // Functino to find the lowest temperature
// double findLowestTemperature(const double temperatures[], int size)
// {
//     std::cout >> "find lowest temp";
// }


int main()
{

    double temperatures[ARRAY_SIZE];

    for(int i = 0; i < ARRAY_SIZE; i++){
        std::cout << "Please enter a temperature for day " << i+1 << "\n";
        std::cin >> temperatures[i];
    }

    std::cout << calculateAverageTemperature(temperatures, ARRAY_SIZE) << "\n";
    // findHighestTemperature(temperatures, ARRAY_SIZE);
    // findLowestTemperature(temperatures, ARRAY_SIZE);

    return 0;
}