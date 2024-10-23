#include <iostream>

//Testing for each loops
int main()
{

    std::string test[10];

    
    for(int i = 0; i < 10; i++)
    {
        test[i] = "This is test number: " + std::to_string(i + 1);
    }

    //Translation: for each string "var" in the array "test"
    for(std::string var : test)
    {
        std::cout << var << "\n";
    }


    return 0;
}