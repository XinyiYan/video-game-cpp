#include <cstdlib>
#include <string>
#include <sstream>
#include <iostream>
#include "floor/floor.h"
#include <fstream>
#include <vector>
#include "objects/characters/player/shade.h"
#include "objects/characters/player/drow.h"
#include "objects/characters/player/troll.h"
#include "objects/characters/player/goblin.h"
#include "objects/characters/player/vampire.h"
#include "objects/characters/enemies/human.h"
#include "objects/characters/enemies/dwarf.h"
#include "objects/characters/enemies/orc.h"
#include "objects/characters/enemies/elf.h"
#include "objects/characters/enemies/merchant.h"
#include "objects/characters/enemies/dragon.h"
#include "objects/items/item.h"
#include "objects/items/treasure/treasure.h"
#include "objects/items/potion/potion.h"
#include "objects/items/potion/rh.h"
#include "objects/items/potion/ba.h"
#include "objects/items/potion/bd.h"
#include "objects/items/potion/ph.h"
#include "objects/items/potion/wa.h"
#include "objects/items/potion/wd.h"
#include "chamber/chamber.h"
#include "objects/characters/character.h"
#include "objects/characters/player/player.h"
#include "objects/characters/enemies/enemy.h"
#include "objects/object.h"

using namespace std;
 
int main(int argc, char *argv[]) {
  srand(time(0));
  string file = "emptyfloor.txt";
  if (argc == 2) {
     file = argv[1];
  } else if (argc == 3) {
     file = argv[1];
     istringstream ss{argv[2]};
     int seed;
     ss >> seed;
     srand(seed);
  }
  cout << "Welcome to CC3K."<< endl;
  Floor *f = new Floor(file);
  f->print();
  string c;
  while (cin >> c) {
    if (c == "no" || c == "so" || c == "ea" || c == "we" || c == "ne" || c == "nw" || c == "se" || c == "sw") {
       int r = f->PCUpdate_move(c,file);
       if (r) {  // upfloor, enemy dont move
          f->EnemyUpdate();
       } else {
          f->print();
       }
    } else if (c == "r") {
       f->restart(file);
    } else if (c == "q") {
       cout << "You quit" << endl;
       break;
    } else if (c == "f") {
       f->changeEnemyStat();
    } else if (c == "u") {
       string dir;
       cin >> dir;
       while (dir != "no" && dir != "so" && dir != "ea" && dir != "we" && dir != "ne" && dir != "nw" && dir != "se" && dir != "sw") {
       cout << "Invalid Direction" << endl;
       cout << "Please enter again" << endl;
       cin.clear();
       cin >> dir;
       }
       f->PCUpdate(c,dir);
       f->EnemyUpdate();
    } else if ( c == "a") {
       string dir;
       cin >> dir;
       while (dir != "no" && dir != "so" && dir != "ea" && dir != "we" && dir != "ne" && dir != "nw" && dir != "se" && dir != "sw") {
       cout << "Invalid Direction" << endl;
       cout << "Please enter again" << endl;
       cin.clear();
       cin >> dir;
       }
       f->PCUpdate(c,dir);
       f->EnemyUpdate();
    } else {
      cout << "Invalid Command" << endl;
      cout << " Please enter again " << endl;
      cin.clear();
    }
    if (f->Win()) {
     cout << " YOU WIN!" << endl;
     f->Score();
     break;
    }
    if (f->PCdead()) {
      cout << "GAME OVER" << endl;
      f->Score();
     break; 
    }
  }
  delete f;  
}
     
  
      
                 
             
       
              
                  
