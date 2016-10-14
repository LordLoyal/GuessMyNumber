#include "game.h"

int rnb=0;
string inp="";
string check_user(string us)
{
  if(us.empty())
  {
  us="Mr. Unknown ;)";
  }
  return us;
}

string usin()
{
  getline(cin, inp);
  return inp;
}

int creaternb()
{
  srand ( time(NULL) );
  rnb=rand() % 100 + 1;
  return rnb;
}

string sug()
{
  string sug="";
  if(rnb>stoi(inp))
  {
    sug = "Meine Nummer ist groesser";
  }
  else
  {
    sug = "Meine Nummer ist kleiner";
  }
  return sug;
}