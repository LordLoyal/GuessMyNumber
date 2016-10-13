#include "game.h"

string check_user(string us)
{
	if(us.empty())
	{
		us="Mr. Unknown ;)";
	}
	return us;
}