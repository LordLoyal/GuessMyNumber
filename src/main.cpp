#include "game.h"



int main()
{
  game* g = new game();
  if(g)
  {
    g->run();
  }
  
  return 0;
}