#include <iostream>
#include <string>
#include <ctime>
#include "AsciiHeader.hpp"
#include <stdlib.h>

//Create the 2D array
//Ask the user which spot to pick
//Check is user won
//Randomly generate which box to fill for the computer
//check to see if the index already has a value. Generate new numbers if so
//check if computer won
//Keep going until winner

//Functions
void setUserSpot(std::string map[3][3])
{
    // Set flag for successful placement
    bool isSet = false;

    while (!isSet)
   {
        // Initialize row and column variables
        int row;
        int column;

        std::cout << "Which row do you choose?: ";
        std::cin >> row;
        std::cout << "Which column do you choose?: ";
        std::cin >> column;

        //Addjust row, and column
        row -= 1;
        column -=1;

        if(row >= 0 && row < 3 && column >= 0 && column < 3){ //Check to make sure user input is valid
            if(map[row][column] == "_"){ //Check to make sure the spot is blank
                map[row][column] = "X";
                isSet = true;
            }else{
                std::cout << "That spot has already been selected. Try again" << "\n";
            }
        }else{
            std::cout << "Invalid row or column, please select between 1 and 3" << "\n";
        }
    }
}

void setComputerSpot(std::string map[3][3])
{
    // Set flag for successful placement
    bool isSet = false;

    while (!isSet)
   {
        // Initialize row and column variables
        int row;
        int column;

        //Initialize our random number generator
        srand(time(NULL));

        //Set row and column to a random number between 0 and 2
        row = (rand() % 3);
        column = (rand() % 3);

        if(map[row][column] == "_"){ //Check to make sure the spot is blank
            map[row][column] = "O";
            isSet = true;
        }else{
            continue;
        }

    }
}

void displayMap(std::string map[3][3])
{
    
    //Display Map
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout << map[i][j] << " ";
        }
        std::cout << "\n";
    }

}

bool checkGameOver(std::string map[3][3])
{   
    //Check Rows
    for(int i = 0; i < 3; i++){
        if(map[i][0] == "X" && map[i][1] == "X" && map[i][2] == "X"){
            std::cout << ticTacToe;
            displayMap(map);
            std::cout << "Game Over! You Win!";
            return true;
        }
        if(map[i][0] == "O" && map[i][1] == "O" && map[i][2] == "O"){
            std::cout << ticTacToe;
            displayMap(map);
            std::cout << "Game Over! You Lose!";
            return true;
        }
    }

    //Check Columns
    for(int i = 0; i < 3; i++){
        if(map[0][i] == "X" && map[1][i] == "X" && map[2][i] == "X"){
            std::cout << ticTacToe;
            displayMap(map);
            std::cout << "Game Over! You Win!";
            return true;
        }
        if(map[0][i] == "O" && map[1][i] == "O" && map[2][i] == "O"){
            std::cout << ticTacToe;
            displayMap(map);
            std::cout << "Game Over! You Lose!";
            return true;
        }
    }

    //Check diagonals
    if(map[0][0] == "X" && map[1][1] == "X" && map[2][2] == "X"){
        std::cout << ticTacToe;
        displayMap(map);
        std::cout << "Game Over! You Win!";
        return true;
    }
    if(map[0][0] == "O" && map[1][1] == "O" && map[2][2] == "O"){
        std::cout << ticTacToe;
        displayMap(map);
        std::cout << "Game Over! You Lose!";
        return true;
    }
    if(map[0][2] == "X" && map[1][1] == "X" && map[2][0] == "X"){
        std::cout << ticTacToe;
        displayMap(map);
        std::cout << "Game Over! You Win!";
        return true;
    }
    if(map[0][2] == "O" && map[1][1] == "O" && map[2][0] == "O"){
        std::cout << ticTacToe;
        displayMap(map);
        std::cout << "Game Over! You Lose!";
        return true;
    }

    return false;

}


int main()
{
    
    //Set flag
    bool GameOver = false;
    //Create multi array
    std::string map[3][3] = {{"_", "_", "_"}, {"_", "_", "_"}, {"_", "_", "_"}};

    while(!GameOver)
    {   
        std::cout << ticTacToe;
        displayMap(map);
        setUserSpot(map);
        displayMap(map);
        setComputerSpot(map);
        displayMap(map);
        system("cls");
        GameOver = checkGameOver(map);
    }

    return 0;
}