#ifndef APEXLAB_APEX_CODE_H
#define APEXLAB_APEX_CODE_H

enum PLAYER
{
  NONE,
  FIRST,
  SECOND
};

const int ROWS = 10;
const int COLS = 10;
const int NUM_TO_WIN = 6;

void ShowBoard(int board[ROWS][COLS]);
bool PlacePiece(int col, int player, int board[ROWS][COLS]);
int LongestRunInRow(int player, int length, int row[COLS]);
int LongestRunInCol(int player, int colNumber, int clength, int rlength, int board[ROWS][COLS]);
void PlayerTurn(int player, int board[ROWS][COLS]);
bool GameWon(int player, int board[ROWS][COLS]);

#endif //APEXLAB_APEX_CODE_H
