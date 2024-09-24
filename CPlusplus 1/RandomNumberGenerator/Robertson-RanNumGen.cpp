// COSC 3306 C++
// Name: Austin Robertson
// Date: 09/20/2024
// Generate n random numbers, calculate the average, display the largest value.

#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    int n; // Number of random integers to generate
    std::cout << "Enter a positive integer (n): ";
    std::cin >> n;

    //Check to make sure the input is possitive
    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    // Seed the random number generator using the current time 
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int sum = 0;
    int maxNumber = INT_MIN; // Initialize to smallest possible value

    std::cout << "Generated random numbers: ";

    // For loop for generating and displaying random numbers
    for (int i = 0; i < n; ++i) {
        // Generate a random integer between 1 and 100 (inclusive)
        int randomNumber = 1 + std::rand() % 100; // Adjusted range
        sum += randomNumber;
        maxNumber = std::max(maxNumber, randomNumber);

        // Print the random number (without newline)
        std::cout << randomNumber;
        if (i < n - 1) {
            std::cout << ", "; // Add a comma except for the last number
        }
    }

    double average = static_cast<double>(sum) / n;

    std::cout << std::endl; // Move to the next line
    std::cout << "Largest number: " << maxNumber << std::endl; // Display the largest number
    std::cout << "Average value: " << average << std::endl; // Display the average value
    

    return 0;
}

