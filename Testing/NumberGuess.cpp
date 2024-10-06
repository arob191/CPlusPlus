#include <iostream>

int main()
{

    int num; 
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1; // This will set our num variable to a random number betwen 1 and 100

    std::cout << "******* NUMBER GUESSING GAME *******'\n";
    
    do{
        std::cout << "Please guess a number between (1-100): ";
        std::cin >> guess;
        tries++;
        if(guess == num){
            std::cout << "That is correct! Number of tries: " << tries;
            continue;
        }else if (guess > num){
            std::cout << "Incorrect! Too high. ";
        }else{
            std::cout << "Incorrect! Too low. ";
        }
    }while(guess != num);

    return 0;
}