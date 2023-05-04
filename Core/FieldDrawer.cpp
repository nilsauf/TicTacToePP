#include "pch.h"
#include "FieldDrawer.h"
#include <iostream>

using namespace std;

void FieldDrawer::draw(char board[3][3])
{
    cout << "  1   2   3  " << endl;
    cout << "1 " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << " ---|---|---" << endl;
    cout << "2 " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << " ---|---|---" << endl;
    cout << "3 " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}