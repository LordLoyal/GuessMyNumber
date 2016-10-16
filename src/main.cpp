#include "game.h"



int main()
{
  game* g = new game();
  if(g)
  {
    g->run();
    delete g;
  }
  
  return 0;
}