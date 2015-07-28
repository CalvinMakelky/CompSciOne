#include <iostream>
#include "dice.h"

using namespace std;

int main()
{
	player p1, p2;
	int x, y;
	for (int i = 0; i < 20; i++)
	{
		x += p1.roll();
		y += p2.roll();
	}
	if (x > y)
		cout << "Player 1 Wins" << endl;
	else if 
		cout << (y > x) << "Player 2 Wins" << endl;
	else
		cout << "Tie" << endl;
	
	system("PAUSE");
	return 0;
}
