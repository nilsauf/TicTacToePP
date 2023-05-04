#include "pch.h"
#include "WinChecker.h"

bool WinChecker::checkDraw(char board[3][3])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool WinChecker::checkWin(char board[3][3], char playerMark)
{
    bool result = false;

    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == playerMark && board[i][1] == playerMark && board[i][2] == playerMark) {
            result = true;
        }
    }

    // Check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == playerMark && board[1][j] == playerMark && board[2][j] == playerMark) {
            result = true;
        }
    }

    // Check diagonals
    if (board[0][0] == playerMark && board[1][1] == playerMark && board[2][2] == playerMark) {
        result = true;
    }

    if (board[0][2] == playerMark && board[1][1] == playerMark && board[2][0] == playerMark) {
        result = true;
    }

    return result;
}