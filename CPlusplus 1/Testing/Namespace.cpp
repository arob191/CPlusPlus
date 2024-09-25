#include <iostream>

// A method of having multiple variable with the same name
namespace first{
    int x = 5;
}

// A method of having multiple variable with the same name
namespace second{
    int x = 2;
}

int main() {
    // You can use namespace standards to cut down on repitition:
    using std::cout;

    int x = 10;

    // since we are using the std::cout name space standard we do not have to type std:: before cout to print.
    cout << second::x; // we are using the second namespace so x = 2

    return 0;
}