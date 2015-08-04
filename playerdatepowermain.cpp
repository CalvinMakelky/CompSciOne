#include <iostream>
#include "date.h"
#include "player.h"

using namespace std;

float f(int x)
{
	if (x == 1)
		return 1;
	if (x == 2)
		return 2;
	return pow(f(x - 1), f(x - 2));
}

	
int main()
{
	date d;
	d.setDate(20, 11, 2012);
	d.printDate();
	cout << d.isLeapYear(2012) << endl;
	cout << d.getDay() << "  " << d.getMonth() << "  " << d.getYear() << endl;
	


	player p1, p2;
	int z, y;
	z = y = 0;
	for (int i = 0; i < 30; i++)
	{
		z += p1.roll();
		z += p2.roll();
	}
	if (z > y)
		cout << "Player 1 Wins" << endl;
	else if (y>z)
		cout << "Player 2 Wins" << endl;
	else
		cout << "Tie" << endl;
	int x;


	cout << "enter an integer for the function" << endl;
	cin >> x;
	cout << f(x) << endl;



	system("PAUSE");
	return 0;
}
