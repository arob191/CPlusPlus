// 10/11/24 Going over functions 

#include <iostream>

// If you are going to have the functino after the main code, then it needs to be declared first
void testFunction();

int main() {
    testFunction();
    testFunction();
    testFunction();
    return 0;
}

// Void function does not return a value
void testFunction(){
    std::cout << "Testing one two\n";
    std::cout << "This is my test function \n";
    std::cout << "Hello welcome to my test function \n\n";
}