#include "game.h"

string game::check_user(string us)
{
  //dead code
  /*if(us.empty())
  {
  us="Mr. Unknown ;)";
  }*/
  return us;
}

string game::usin()
{
  // getline(cin, inp);
  cin >> inp;
  return inp;
}

int game::creaternb()
{
  srand((unsigned int)time(NULL));
  rnb=rand() % 100 + 1;
  return rnb;
}

string game::sug()
{
  string sug="";
  if(rnb>stoi(inp))
  {
    sug = "Meine Nummer ist groesser\n";
  }
  else
  {
    sug = "Meine Nummer ist kleiner\n";
  }
  return sug;
}

void game::game_end()
{
  cout << tries;
  if(tries >= 1)
  { cout << "Richtig erraten! Ich habe an die Zahl " << ranm << " gedacht." << endl;
  }
  else
  {
    cout << "Schade ich hatte an die Zahl " << ranm << " gedacht. Versuche es ruhig noch einmal." << endl;
  }
}

//main.cpp
void game::run(){
  cout << "Hello friendly user, what is your name?" << endl;
  string user=usin();
  user=check_user(user);
  cout << endl << "Hallo " << user << "." << endl <<"Errate die Zahl, die ich mir zwischen 1 & 100 ausgedacht habe. Du hast " << tries << " Versuche offen." << endl << endl;
  int ranm=creaternb();
  while((usin() != to_string(ranm)) && (tries > 1))
  {
    cout << endl << "Leider falsch geraten. Versuche es noch einmal. Du hast noch " << --tries << " Versuche offen." << endl;
    cout << sug() << endl;
  }
  game_end();
  while(!_kbhit()) 
  {
  }
}
