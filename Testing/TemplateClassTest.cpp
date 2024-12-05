#include <iostream>
using namespace std;

#include "TemplateClass.hpp"

int main() 
{
    Stack<int> intStack; 
    
    for (int i = 0; i < 10; i++) 
    {
        intStack.push(i);
    }

    while (!intStack.isEmpty())
    {
        cout << "Element: " << intStack.pop() << " ";
    }
    cout << endl;
    
    Stack<string> stringStack;

    stringStack.push("Austin");
    stringStack.push("Lilly");
    stringStack.push("Cassie");

    while(!stringStack.isEmpty())
    {
        cout << stringStack.pop() << " ";
    }




    return 0;
}