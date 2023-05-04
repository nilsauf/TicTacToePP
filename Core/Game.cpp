#include "pch.h"
#include "Game.h"
#include "FieldDrawer.h"
#include "GameInput.h"
#include "WinChecker.h"
#include <iostream>

using namespace std;

void Game::run()
{
	char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
	char currentPlayer = 'X';

	FieldDrawer drawer;
	GameInput input;
	WinChecker checker;

	drawer.draw(board);

	bool runs = true;
	while (runs)
	{
		cout << endl << endl;
		cout << "It is " << currentPlayer << "'s turn!" << endl;

		int row, col = 0;
		do
		{
			row = input.askForRow();
			col = input.askForColumn();

		} while (board[row][col] != ' ');

		board[row][col] = currentPlayer;

		drawer.draw(board);

		if (checker.checkWin(board, currentPlayer))
		{
			cout << "Congratulations! Player " << currentPlayer << " has won!" << endl;
			runs = false;
		}
		else if (checker.checkDraw(board))
		{
			cout << "It's a draw!" << endl;
			runs = false;
		}

		if (currentPlayer == 'X')
		{
			currentPlayer = 'O';
		}
		else
		{
			currentPlayer = 'X';
		}
	}	
}
