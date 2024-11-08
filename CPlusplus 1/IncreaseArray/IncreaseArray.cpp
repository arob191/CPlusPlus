// COSC 3306 C++
// Name: Austin Robertson  
// Date: 11/07/2024
// Doubles our original array using the doubleCapacity method

#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout, std::endl;

//Double capacity method
int* doubleCapacity(const int* list, int size)
{
    int newSize = size * 2; //Double our size variable
    int* doubleList= new int[newSize]; //Allocate new memory

    //Add our original elements to our doubled list
    for (int i = 0; i < size; i++)
    {
        doubleList[i] = list[i];
    }

    return doubleList;
}

//Main code
int main()
{
    srand(time(NULL)); //Initialize our random number generator

    int listSize = 20;
    int* list = new int[listSize]; //Initialize our list pointer

    //For loop to fill our list with random numbers
    for (int i = 0; i < listSize; i++)
    {
        list[i] = (rand() % 100) + 1;
    }

    //Print our list
    cout << "Original List: ";
    for (int i = 0; i < listSize; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;

    //Call our double capacity method
    int* doubledList = doubleCapacity(list, listSize);

    //Fill the rest of our doubled list starting at index 10
    for (int i = listSize; i < listSize * 2; i++)
    {
        doubledList[i] = (rand() % 100) + 1;
    }

    //Print our doubled list
    cout << "Doubled List: ";
    for (int i = 0; i < listSize * 2; i++)
    {
        cout << doubledList[i] << " ";
    }

    cout << endl;

    return 0;
}