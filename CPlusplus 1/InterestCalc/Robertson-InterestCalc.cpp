// COSC 3306 C++
// Name: Austin Robertson
// Date: 09/05/2024
// calculates the simple interest for a loan based off of the users input

#include <iostream>
using namespace std;

int main() {
    // Set our variables
    double principal, annualInterestRate, timeYears;

    // Ask the user for the principle amount
    cout << "Please enter the principal amount: ";
    cin >> principal;

    // Ask the user to input an interest rate. We will calculate this as a percentage
    cout << "Please enter the interest: ";
    cin >> annualInterestRate;

    // Ask the user for how many years they will pay on their loan
    cout << "What is the loan term in years?: ";
    cin >> timeYears;

    // Let's first make sure that the user put in valid data by checking to make sure everything is a positive int
    if (principal <= 0 || annualInterestRate <= 0 || timeYears <= 0) {
        cout << "Error: All inputs (principal, interest rate, and time) must be positive." << endl;
    } else {
        // Convert annual interest rate to decimal
        double interestRateDecimal = annualInterestRate / 100.0;

        // Calculate simple interest
        double simpleInterest = principal * interestRateDecimal * timeYears;

        // Display the result
        cout << "Simple Interest: $" << simpleInterest << endl;
    }

    return 0;
}