// COSC 3306 C++
// Name: Austin Robertson
// Date: 09/05/2024
// Identify the type of triangle from the users input for the dimensions of a 3 sides

#include <iostream>
using namespace std;


int main(){
    // Our variables
    double side1, side2, side3;
    
    // Have user imput the side lengths
    cout << "Enter the length of side 1: ";
    cin >> side1;

    cout << "Enter the length of side 1: ";
    cin >> side2;
    
    cout << "Enter the length of side 1: ";
    cin >> side3;

    // Check if the side lengths form a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // Lets determine the type of triangle
        if (side1 == side2 && side2 == side3) {
            cout << "Equilateral Triangle" << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "Isoscoleles Triangle" << endl;
        } else {
            cout << "Scalene Triangle" << endl;
        }
    // Return our error message if the user types invalid triangle lengths
    } else {
        cout << "invalid side lengths. Cannot form a triangle." << endl;
    }

    return 0;
}