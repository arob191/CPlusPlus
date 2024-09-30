#include <iostream>

int main()
{
    for (int i = 1; i <= 10; i++){ 
        if(i == 5){ // Testing the continue keyword
            continue;
        }
        
        std::cout << i << '\n';
    }

    std::cout << "Start!";
    
    return 0;
}