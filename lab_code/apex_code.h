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

void ShowBoard(int board[][COLS]);
bool PlacePiece(int col, int player, int board[][COLS]);
int LongestRunInRow(int player, int length, int row[]);
int LongestRunInCol(int player, int colNumber, int clength, int rlength, int board[][COLS]);
void PlayerTurn(int player, int board[][COLS]);
bool GameWon(int player, int board[][COLS]);

#endif //APEXLAB_APEX_CODE_H
