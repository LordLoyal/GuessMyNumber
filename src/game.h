#include <string>
#include <conio.h>
#include <iostream>
#include <time.h>


using namespace std;
class game{
  private:
  int rnb=0;
  int tries = 7;
  int ranm= 0;
  public:
  string inp="";
  string check_user(string us);
  string usin();
  int creaternb();
  string sug();
  void run();
  void game_end();
};
