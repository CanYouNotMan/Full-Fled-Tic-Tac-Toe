#include "ticTacToe.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
                                                                                            //make the grid
    int ttt[3][3] = { 0 };
                                                                                            //Making player 1 start
    int player = { 1 };
                                                                                            //Letting the user know that player 1 is going first
    cout << "Player 1 is going first" << "\n";
                                                                                            //Make it so the code keep executing forever
    while (true)
    {
                                                                                            //Rendering the grid
        render(ttt);
        cout << '\n';
                                                                                            
        int pick_Row{enterRow()};                                                           //pick row
        cout << '\n';
 
        int pick_Col{enterCol()};                                                           //pick col 
        cout << '\n';

        cout << "---------------------" << '\n';
      
                                                                                            //Make a recorded move into the grid if the move is valid
        if (legalMove(ttt, pick_Row, pick_Col) == true)
        {
            // Make the move if it's legal
            currentMove(ttt, pick_Row, pick_Col, player);

            // Check if this move leads to a win
            if (checkWin(ttt, player))
            {
                render(ttt);
                cout << "Player " << player << " wins!" << '\n';
                break; // End the game
            }

        }
        else
        {
            // If the move was not legal, prompt for a new move
            cout << "Not a legal move, please try again: " << "\n";
            cout << "Player " << player << " try again" << '\n';
            cout << "----------------------" << '\n';
            // Switch players after a valid move
            if (player == 1)
            {
                player = 2;
                cout << "Player 2 turn" << '\n';
                cout << "----------------" << '\n';
            }
            else
            {
                player = 1;
                cout << "Player 1 turn" << '\n';
                cout << "----------------" << '\n';
            }
        }
                                                                                             //After player make a move, then if it player 1 then it switch to player 2
        if (checkForEmptySpot(ttt) == false)
        {
            resetBoard(ttt);
        }
        if (player == 1)
        {
            player = 2;
            cout << "Player 2 turn" << '\n';
            cout << "----------------" << '\n';
        }
        else
        {
            player = 1;
            cout << "Player 1 turn" << '\n';
            cout << "----------------" << '\n';
        }
    }


    return 0;
}