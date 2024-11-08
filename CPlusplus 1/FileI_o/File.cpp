// COSC 3306 C++
// Name: Austin Robertson  
// Date: 11/07/2024
// Create our output file, then use it to encrypt the randoms numbers using a vector.

#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
using namespace std;


int main()
{
    srand(time(NULL)); //Initialize our random number generator
    ofstream output; //Initialize our output stream
    
    //Create our file
    output.open("InputRobertson.txt");

    //For loop to write our 100 integers
    for (int i = 0; i < 100; i++)
    {
        output << rand() << " ";
    }

    //Close output
    output.close();

    ifstream input("InputRobertson.txt"); //initialize our input stream
    
    vector<int> numbers; //Initialize our vector
    int number; //Initialize our number place holder

    //While loop to read input to a vector
    while (input >> number)
    {
        //insert elements at the end of the vector to make it easier when we write to our output
        numbers.push_back(number + 5); 
    }

    //Close input
    input.close();

    //Create out output file
    output.open("OutputRobertson.txt");

    //For loop to write to our output
    for (const int& num : numbers)
    {
        output << num << " ";
    }

    //Close output
    output.close();

    return 0;
}