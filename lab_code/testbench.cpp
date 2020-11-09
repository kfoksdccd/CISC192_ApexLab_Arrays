//
// Don't modify code in this file, with the exception
// of adding test cases.
//
#include <iostream>
#include <fstream>
#include "apex_code.h"

using namespace std;

// Use for everything other than doubles/floats
template<typename T> bool test(T expected, T result)
{
    if(expected != result)
    {
        cout << "FAILED: Expected " << expected << ", received " << result << ".\n";
    }
    else {
        cout << "PASS\n";
    }

    return expected == result;
}

int main()
{
    // To add a test case, duplicate one of the test lines below
    // modify input with the first string, and the expected output
    // in the second string.

  int a_test[ROWS] = {FIRST, SECOND, FIRST, SECOND, NONE, FIRST, FIRST, FIRST, FIRST, SECOND};
  
  (void)test(4, LongestRunInRow(FIRST, ROWS, a_test));
  (void)test(1, LongestRunInRow(SECOND, ROWS, a_test));

  int b_test[ROWS] = {SECOND, SECOND, SECOND, SECOND, NONE, SECOND, FIRST, FIRST, FIRST, SECOND};

  (void)test(3, LongestRunInRow(FIRST, ROWS, b_test));
  (void)test(4, LongestRunInRow(SECOND, ROWS, b_test));

  int board_test[ROWS][COLS] = 
  {
    {SECOND, SECOND, SECOND, SECOND, NONE, SECOND, FIRST, FIRST, FIRST, SECOND},
    {SECOND, SECOND, SECOND, SECOND, NONE, SECOND, FIRST, FIRST, FIRST, SECOND},
    {SECOND, SECOND, SECOND, SECOND, NONE, SECOND, FIRST, FIRST, FIRST, SECOND},
    {FIRST, SECOND, FIRST, SECOND, NONE, FIRST, FIRST, FIRST, FIRST, SECOND},
    {FIRST, SECOND, FIRST, SECOND, NONE, FIRST, FIRST, FIRST, FIRST, SECOND},
    {SECOND, SECOND, SECOND, SECOND, NONE, SECOND, FIRST, FIRST, FIRST, SECOND},
    {SECOND, SECOND, SECOND, SECOND, NONE, SECOND, FIRST, FIRST, FIRST, SECOND},
    {FIRST, SECOND, FIRST, SECOND, NONE, FIRST, FIRST, FIRST, FIRST, SECOND},
    {SECOND, SECOND, SECOND, SECOND, NONE, SECOND, FIRST, FIRST, FIRST, SECOND},
    {SECOND, SECOND, SECOND, SECOND, FIRST, SECOND, FIRST, FIRST, FIRST, SECOND}
  };

  (void)test(10, LongestRunInCol(SECOND, 1, COLS, ROWS, board_test));
  (void)test(3, LongestRunInCol(SECOND, 2, COLS, ROWS, board_test));

  (void)test(false, PlacePiece(9, SECOND, board_test));
  (void)test(false, PlacePiece(COLS, SECOND, board_test));
  ShowBoard(board_test);
  (void)test(true, PlacePiece(4, FIRST, board_test));

  // Create board filled with FIRST values for testing
  int test_win[ROWS][COLS];
  for(int r = 0; r < ROWS; ++r)
  {
    fill_n(test_win[r], COLS, FIRST);
  }
  ShowBoard(test_win);

  (void)test(true, GameWon(FIRST, test_win));
  (void)test(false, GameWon(SECOND, test_win));

  return 0;
}