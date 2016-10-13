#include "game.h"
#include <conio.h>
#include <iostream>


int main()
{
	string user;
	cout << "Hello friendly user, what is your name?";
	getline(cin, user);
	user=check_user(user);

	cout << endl << "Hallo " << user << endl;
	while(!_kbhit()) 
	{
	}
	return 0;
}