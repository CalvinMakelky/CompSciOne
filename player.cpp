#include <iostream>
#include "player.h"

using namespace std;

player::player()
{
}

int player::roll()
{
	return (rand() % (14 - 7 + 1) + 7);
}
