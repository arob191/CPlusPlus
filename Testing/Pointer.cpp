#include <iostream>
using namespace std;


void swap1(int n1, int n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void swap2(int& n1, int& n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void swap3(int* p1, int* p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swap4(int* &p1, int* &p2)
{
    int* temp = p1;
    p1 = p2;
    p2 = temp;
}


int main()
{
    // Initialize test variable. Allocating 4 bytes of space in memory
    int test = 5;
    // setting the pointer to point towards the memory address of test vairable
    int* pTest = &test;

    cout << pTest << endl;
    cout << *pTest << endl;
    cout << &pTest << endl;
    cout << &test << endl;

    *pTest -= 1;

    cout << *pTest - 1 << endl;
    cout << test << endl;

    int list[3] = {11, 10, 33};

    cout << list << endl;
    cout << *list << endl;

    int num1 = 1;
    int num2 = 2;
    int* Pnum1 = &num1;
    int* pnum2 = &num2;
    
    swap1(num1, num2);

    cout << num1 << " " <<num2 <<endl;

    swap2(num1, num2);

    cout << num1 << " " <<num2 <<endl;

    swap3(Pnum1, pnum2);

    cout << num1 << " " <<num2 <<endl;

    swap4(Pnum1, pnum2); // This will just change which memory address Pnum1 and Pnum2 are pointing to

    cout << num1 << " " <<num2 <<endl;

return 0;
}