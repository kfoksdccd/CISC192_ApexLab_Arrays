#include <iostream>
#include "apex_code.h"

using namespace std;

void ShowBoard(int board[][COLS])
{
  cout << endl;
  for(int h = 0; h < COLS; ++h)
  {
    cout << h << " ";
  }
  cout << endl;
  cout << string(COLS*2-1, '_') << endl;
  cout << endl;
  for(int r = 0; r < ROWS; ++r)
  {
    for(int c = 0; c < COLS; ++c)
    {
      std::cout << board[r][c] << " ";
    }
    std::cout << std::endl;
  }
}

int LongestRunInCol(int player, int colNumber, int clength, int rlength, int board[][COLS])
{
  // Construct a single dimensional array from the board
  // to pass to LongestRunInRow
  
  // create local array here

  for(/* put code here */)
  {
    col[r] = board[r][colNumber];
  }

  // Reuse the logic in LongestRunInRow, using the
  // array just constructed from the column in the board
  return LongestRunInRow(/*fill in parameters*/);
}

void PlayerTurn(int player, int board[][COLS])
{
  cout << "Player " << player << "'s turn." << endl;
  int col;
  do
  {
    cout << "Select a column: " << endl;
    cin >> col;

  }while(false == PlacePiece(col, player, board));
}
