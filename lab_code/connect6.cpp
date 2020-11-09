#include <iostream>
#include "apex_code.h"

using namespace std;

int main()
{
  int board[ROWS][COLS] = {NONE};

  while(true)
  {
    ShowBoard(board);
    PlayerTurn(FIRST, board);
    if(GameWon(FIRST, board))
    {
      cout << "\n!!! Player 1 Wins !!!" << endl;
      ShowBoard(board);
      break;
    }
    
    ShowBoard(board);
    PlayerTurn(SECOND, board);
    if(GameWon(SECOND, board))
    {
      cout << "\n!!! Player 2 Wins !!!" << endl;
      ShowBoard(board);
      break;
    }
  }
}