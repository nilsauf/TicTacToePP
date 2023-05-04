#include "pch.h"
#include "GameInput.h"
#include <iostream>

using namespace std;

int askFor(string subject)
{
	int result = 0;

	while (result != 1 && result != 2 && result != 3)
	{
		cout << "Please enter " << subject << " [1,2,3]: ";
		cin >> result;
	}
	return result - 1;
}

int GameInput::askForRow()
{
	return askFor("Row");
}

int GameInput::askForColumn()
{
	return askFor("Column");
}