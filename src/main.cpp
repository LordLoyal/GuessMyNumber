#include "game.h"



int main()
{

  cout << "Hello friendly user, what is your name?";
  string user=usin();
  user=check_user(user);
  int tries = 7;
  cout << endl << "Hallo " << user << "." << endl <<"Errate die Zahl, die ich mir zwischen 1 & 100 ausgedacht habe. Du hast " << tries << " Versuche offen." << endl << endl;
  int ranm=creaternb();
  while((usin() != to_string(ranm)) && (tries > 1))
  {
    cout << endl << "Leider falsch geraten. Versuche es noch einmal. Du hast noch " << --tries << " Versuche offen." << endl;
    cout << sug() << endl;
  }
  if(tries > 1)
  {
    cout << "Richtig erraten! Ich habe an die Zahl " << ranm << " gedacht." << endl;
  }
  else
  {
    cout << "Schade ich hatte an die Zahl " << ranm << " gedacht. Versuche es ruhig noch einmal." << endl;
  }

  
  while(!_kbhit()) 
  {
  }
  return 0;
}