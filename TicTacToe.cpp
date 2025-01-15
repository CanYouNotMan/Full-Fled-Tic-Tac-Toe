#include <iostream>
using std::cout;
using std::cin;
using std::endl;

                                                                                            //Render the Grid for palyer to see
void render(int arr[3][3])
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
            cout << arr[row][col] << " ";
        cout << '\n';
    }
}
                                                                                            //Update the move to the grid
void currentMove(int arr[3][3], int row, int col, int value)
{
        arr[row][col] = value; 
    
}
                                                                                            //check if either player win
bool checkWin(int arr[3][3], int player) 
{
                                                                                            // Check rows
    for (int row = 0; row < 3; row++) {
        if (arr[row][0] == player && arr[row][1] == player && arr[row][2] == player) 
        {
            return true;
        }
    }
                                                                                            // Check columns
    for (int col = 0; col < 3; col++) {
        if (arr[0][col] == player && arr[1][col] == player && arr[2][col] == player) 
        {
            return true;
        }
    }
                                                                                            // Check diagonals point left
    if (arr[0][0] == player && arr[1][1] == player && arr[2][2] == player) 
    {
        return true;
    }
                                                                                            //check diagonal point right
    if (arr[0][2] == player && arr[1][1] == player && arr[2][0] == player) 
    {
        return true;
    }
    return false;
}
bool checkForEmptySpot(int arr[3][3])
{
                                                                                            // Check Rows
    for (int row = 0; row < 3; row++)
    {
                                                                                            // Check Cols
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == 0)
            {
                return true;
            }
        }
    }
    return false;
       
}
void resetBoard(int arr[3][3])
{
    for (int row = 0; row < 3; row++) 
    {
        for (int col = 0; col < 3; col++) 
        {
            arr[row][col] = 0;
        }
    }
}
bool legalMove(int arr[3][3], int row, int col) 
{
    
    if (arr[row][col] == 0) 
    {
        cout << "this is allow move" << "\n";
        return true;                                                                        // The move is legal
    }
    else
    {
        cout << "this is not allow move" << "\n";
        return false;                                                                       // The spot is already taken
    }
                                                                              
}
bool validatingNumb(int numb)
{
                                                                                            //This will return true if the user enter 0,1,2
    return numb == 0 || numb == 1 || numb == 2;
}
int enterRow()
{
    int numb{};
    do
    {
        cout << "Pick the Row you want (0 = top row | 1 = middle row | 2 = bottom row): ";  //Checking whether the respond is true, if not then tell player to try again
        cin >> numb;
        if (!validatingNumb(numb))                                                          
        {
            cout << "Invalid input. Please enter 0, 1, or 2." << '\n';
        }
    } while (!validatingNumb(numb));

    return numb;                                                                            //exit the loop when player enter a valid answer
}
int enterCol()
{
    int numb{};
    do
    {
        cout << "Pick the Col you want (0 = left col | 1 = middle col | 2 = right col): ";  //Checking whether the respond is true, if not then tell player to try again
        cin >> numb;
        if (!validatingNumb(numb))
        {
            cout << "Invalid input. Please enter 0, 1, or 2." << '\n';
        }
    } while (!validatingNumb(numb));

    return numb;                                                                            //exit the loop when player enter a valid answer
}

