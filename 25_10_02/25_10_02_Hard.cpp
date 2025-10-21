//Link to Question
//https://www.geeksforgeeks.org/dsa/validity-of-a-given-tic-tac-toe-board-configuration

#include <iostream>
using namespace std;

bool checkWin(int pattern[9], int player)
{
	int winningPattern[9][3] = { {0,1,2}, {0,4,8}, {0,3,6}, {1,4,7}, {2,4,6}, {2,5,8}, {3,4,5}, {6,4,2}, {6,7,8} };
	bool win = false;

	for (int i = 0; i < 9; i++) 
	{
		if (pattern[winningPattern[i][0]] == pattern[winningPattern[i][1]] and pattern[winningPattern[i][0]] == pattern[winningPattern[i][2]])
		{
			if (pattern[winningPattern[i][0]] == player)
				win = true;
		}
	}
	return win;
}

int main()
{
	char matrix[3][3] = { {'X','X','O'},  // 0 1 2
					      {'O','O','X'},  // 3 4 5
					      {'X','O','X'} };// 6 7 8
	int pattern[9], Xmoves = 0, Omoves = 0;
	bool validGame = true;

	for (int rows = 0; rows < 3; rows++) 
	{
		for (int cols = 0; cols < 3; cols++) 
		{
			if (matrix[rows][cols] == 'X') 
			{
				pattern[rows*3 + cols] = 0;
				Xmoves++;
			}
			else if (matrix[rows][cols] == 'O')
			{ 
				pattern[rows*3 + cols] = 1;
				Omoves++;
			}	
		}
	}
	bool Xwin = checkWin(pattern, 0);
	bool Owin = checkWin(pattern, 1);

	if (Xwin == true and Owin == true)//both wins
		validGame = false;

	if (Xmoves-Omoves != 0 and Xmoves - Omoves != 1)//X and O does not move one after the other
		validGame = false;

	if (validGame)
		cout << "Given board is valid";
	else if (!validGame)
		cout << "Given board is not valid";

	
}