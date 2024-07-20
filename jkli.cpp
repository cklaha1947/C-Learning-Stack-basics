#include <cstdlib> // system definitions
#include <iostream> // I/O definitions
using namespace std; // make std:: accessible
const int X = 1, O = -1, EMPTY = 0; // possible marks
int board[3][3]; // playing board
int currentPlayer; // current player (X or O)
void clearBoard() { // clear the board
for (int i = 0; i < 3; i++)
for (int j = 0; j < 3; j++)
board[i][j] = EMPTY; // every cell is empty
currentPlayer = X; // player X starts
}
void putMark(int i, int j) { // mark row i column j
board[i][j] = currentPlayer; // mark with current player
currentPlayer = -currentPlayer; // switch players
}
bool isWin(int mark) { // is mark the winner?
int win = 3*mark; // +3 for X and -3 for O
return ((board[0][0] + board[0][1] + board[0][2] == win) // row 0
| | (board[1][0] + board[1][1] + board[1][2] == win) // row 1
| | (board[2][0] + board[2][1] + board[2][2] == win) // row 2
| | (board[0][0] + board[1][0] + board[2][0] == win) // column 0
| | (board[0][1] + board[1][1] + board[2][1] == win) // column 1
| | (board[0][2] + board[1][2] + board[2][2] == win) // column 2
| | (board[0][0] + board[1][1] + board[2][2] == win) // diagonal
| | (board[2][0] + board[1][1] + board[0][2] == win)); // diagonal
}
