// COSC 3306 C++
// Name: Austin Robertson
// Date: 09/20/2024
// Calculate the tax bracket of the user and how much they owe on their income

#include <iostream>
#include <iomanip>

// Calculate the tax bracket function
double calculateTax(double income) {
    if (income <= 9875)
        return 0.10 * income;
    else if (income <= 40125)
        return 0.12 * income;
    else if (income <= 85525)
        return 0.22 * income;
    else if (income <= 163300)
        return 0.24 * income;
    else if (income <= 207350)
        return 0.32 * income;
    else if (income <= 518400)
        return 0.35 * income;
    else
        return 0.37 * income; // Return the tax owed
}

// Function to display income and tax amount
void displayTax(double income, double taxAmount) {
    // Print the income and owed tax
    std::cout << "For an income of $" << std::fixed << std::setprecision(2) << income
              << ", the calculated tax is $" << std::fixed << std::setprecision(2) << taxAmount << std::endl;
}

// Main function
int main() {
    double userIncome; // create our variable
    std::cout << "Enter your income: $"; // Ask for input
    std::cin >> userIncome; // Set our variable

    double taxOwed = calculateTax(userIncome); // Use our calculate function and pass our variables
    displayTax(userIncome, taxOwed); // User our display function and pass our variables

    return 0; // Close our function
}