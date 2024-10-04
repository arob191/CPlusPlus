// COSC 3306 C++
// Name: Austin Robertson  
// Date: 10/03/2024
// one line description of the purpose of your program 

#include <iostream>

//Declare Global constants
const int ARRAY_SIZE = 7;

// Create our functions:
// Function to calculate the average temperature
double calculateAverageTemperature(const double temperatures[], int size)
{
    double average; // Set our average variable to return

    for(int i = 0; i < ARRAY_SIZE; i++){
        average += temperatures[i]; // Find the sum of the temps
    }

    average /= ARRAY_SIZE; // Divide by array size

    return average; // Return our average
}

// Function to find the highest temperature
double findHighestTemperature(const double temperatures[], int size)
{
    double highest = temperatures[0]; // Set our highest temp variable to return

    for(int i = 0; i < ARRAY_SIZE; i++){
        if(temperatures[i] > highest){ // If our current index is higher than our highest variable, replace the highest variable
            highest = temperatures[i];
        }
    }

    return highest; // Return highest variable
}

// Functino to find the lowest temperature
double findLowestTemperature(const double temperatures[], int size)
{
    double lowest = temperatures[0]; // Set our lowest temp variable to return

    for(int i = 0; i < ARRAY_SIZE; i++){ 
        if(temperatures[i] < lowest){ // If the current index is less than the lowest variable then replace the lower variable
            lowest = temperatures[i];
        }
    }

    return lowest; // Return lowest variable
}


int main()
{

    double temperatures[ARRAY_SIZE]; // Initialize array

    for(int i = 0; i < ARRAY_SIZE; i++){
        std::cout << "Please enter a temperature for day " << i+1 << "\n"; // For loop for the user input
        std::cin >> temperatures[i];
    }

    // Call our average temp function
    std::cout << "The average temperature is: " 
        << calculateAverageTemperature(temperatures, ARRAY_SIZE) << "\n";
    // Call our highest temp function
    std::cout << "The highest temperature is: " 
        << findHighestTemperature(temperatures, ARRAY_SIZE) << "\n";
    // Call our lowest temp function
    std::cout << "The lowest temperature is: "
         << findLowestTemperature(temperatures, ARRAY_SIZE) << '\n';

    return 0;
}