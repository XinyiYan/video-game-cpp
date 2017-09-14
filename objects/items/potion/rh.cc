#include "rh.h"
#include "../../characters/player/player.h"
using namespace std;

RH::RH(int x, int y, bool a): Potion(x,y,"RH",a) {}

RH::~RH() {}

void RH::apply(Player *p) {
  p->usePotion(this);
}

