#include <iostream>
#include <string>

using namespace std;

int main() 
{
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 1, 0, 0}
    };

    //keep track of hits and number of player turns
    int hits = 0;
    int numberOfTurns = 0;

    //Allow the player to keep going until they have hit all four ships
    while (hits < 4)
    {
        int row, column;

        cout << "Selecting coordinates \n";

        //ask the player for a row
        while (hits >=0)
        {
            cout << "Choose a row number between 1 and 4: ";
            cin >> row;
            if (row < 1 || row > 4)
            {
                cout << "Invalid value, please try again." << endl << endl;
            }
            else
            {
                cout << endl;
                break;
            }
        }

        //ask the player for a column
        while (hits >=0)
        {
            cout << "Choose a column number between 1 and 4: ";
            cin >> column;
            if (column < 1 || column > 4)
            {
                cout << "Invalid value, please try again." << endl << endl;
            }
            else
            {
                cout << endl;
                break;
            }
        }
        
        //check if a ship exists at the location
        //remember that arrays are 0-indexed, whilst user input is 1-indexed 
        //so, subtract 1 from row and column values provided by user
        if (ships[row -  1][column - 1])
        {
            //remove the ship 
            ships[row -  1][column - 1] = 0;
            //increase the hit count
            hits++;

            //update the user
            cout << "Hit! " << (4 - hits) << " left. \n\n";
        } else {
            //update the user
            cout << "Miss. Try again! \n\n "; 
        }
        
        //count the number of turns taken
        numberOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns.\n";
    
}