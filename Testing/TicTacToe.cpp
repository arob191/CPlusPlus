#include <iostream>
#include <string>

//Create the 2D array
//Ask the user which spot to pick
//Check is user won
//Randomly generate which box to fill for the computer
//check to see if the index already has a value. Generate new numbers if so
//check if computer won
//Keep going until winner

//Functions
void setUserspot(std::string map[3][3])
{
    // Set flag for successful placement
    bool isSet = false;

    while (!isSet)
   {
        // Initialize row and column variables
        int row;
        int column;

        std::cout << "Which row do you choose?: " << "\n";
        std::cin >> row;
        std::cout << "Which column do you choose?: " << "\n";
        std::cin >> column;

        //Addjust row, and column
        row -= 1;
        column -=1;

        if(row >= 0 && row < 3 && column >= 0 && column < 3) //Check to make sure user input is valid
        {
            if(map[row][column] == "_") //Check to make sure the spot is blank
            {
                map[row][column] = "X";

                //Display Map
                for(int i = 0; i < 3; i++)
                {
                    for(int j = 0; j < 3; j++)
                    {
                        std::cout << map[i][j] << " ";
                    }
                    std::cout << "\n";
                }

                isSet = true;
            }else{
                std::cout << "That spot has already been selected. Try again" << "\n";
            }
        }else{
            std::cout << "Invalid row or column, please select between 1 and 3" << "\n";
        }
    }
}



int main()
{
    //Set flag
    bool GameOver = false;
    //Create multi array
    std::string map[3][3] = {{"_", "_", "_"}, {"_", "_", "_"}, {"_", "_", "_"}};

    while(!GameOver)
    {
        setUserspot(map);
    }
    

    return 0;
}