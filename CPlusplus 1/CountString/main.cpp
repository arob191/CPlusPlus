#include <iostream>
#include <cctype>

// This program takes a string from the user and finds each lower case letter

// Declare my variable
std::string userInput;
int lowerCase;

// Function to accept a string
int countLowerCase(const std::string& input){
    int count; // Set our count variable to return the number of lower case characters
    
    for(char c : input){ // Loop through our string
        // Test each letter if it is lower case
        if(std::islower(c)) {
            count++;
        }
    }

    return count;
}


int main() {
    // ask user for a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);

    // call our function
    int result = countLowerCase(userInput);

    // print results
    std::cout << "There are " << result << " lower case letters in your string.";

    return 0;
}