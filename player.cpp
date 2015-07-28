#include <iostream>
#include "dice.h"

using namespace std;

player::player()
{
	num = 0;
}
int player::roll()
{
	return (rand() % (6 - 1 + 1) + 1);
}
