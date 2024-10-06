// COSC 3306 C++
// Name: Austin Robertson  
// Date: 10/04/2024
// Allow the user to create a 3x3 matrix and calculate the sum of the major diagonal

#include <iostream>

// Set our constants
const int ARRAY_SIZE = 3; 

//Define our functions
//Function to find the sum of the major diagonal
int diagonalSum(const int matrix[ARRAY_SIZE][ARRAY_SIZE]){
    int sum = 0;
    //No need for a nested loop. i will change our column and row
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += matrix[i][i];
    }
    return sum; //Return our sum
}

//Funtion to print the matrix
void printMatrix(const int matrix[ARRAY_SIZE][ARRAY_SIZE]){
    std::cout << "Matrix: " << '\n';
    for (int i=0; i < ARRAY_SIZE; ++i) {
        for (int j = 0; j < ARRAY_SIZE; ++j){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << '\n';
    }
}

//Main code
int main()
{
    //Initialize our matrix
    int matrix[ARRAY_SIZE][ARRAY_SIZE];
        std::cout << "Please enter a number for each element of the 3 x 3 matrix: " << "\n";
    
    // Create our nested for loop to fill each column and row
    for (int i=0; i < ARRAY_SIZE; i++) {
        for(int j=0; j < ARRAY_SIZE; j++){
            if(std::cin >> matrix[i][j]){
            }else{
                std::cout << "Not a valid input. Please enter a number" << '\n';
                return 1;
            }
        }
    }

    //Call our functions
    printMatrix(matrix);
    std::cout << "Major diagonal sum: " << diagonalSum(matrix) << '\n';
    return 0;
}