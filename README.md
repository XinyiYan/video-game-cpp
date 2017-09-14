# video-game-cpp
Game play is as follows: the player character moves through a dungeon and slays enemies and collects treasure 
until reaching the end of the dungeon (where the end of the dungeon is the 5th floor).

There are five player character races: shade(default), drow, vampire, troll and goblin.  
The player character is denoted by the ‘@’ 

Enemies are denoted as follows: (H)uman, d(W)arf, (E)lf, (O)rc, (M)erchant, (D)ragon, Half(L)ing.

Potions are of two types: positive and negative.  
Positive potions:  
- Restore health (RH): restore up to 10 HP (cannot exceed maximum prescribed by race)  
- Boost Atk (BA): increase Atk by 5  
- Boost Def (BD): increase Def by 5  

Negative potions:  
- Poison health (PH): lose up to 10 HP  
- Wound Atk (WA): decrease Atk by 5  
- Wound Def (WD): decrease Def by 5  
The effects of RH and PH are permanent while the effects of all other potions are limited to the floor they are used on.  

Gold can be in several types of piles: small (value 1), normal (value 2), merchant hoard (value 4), and dragon hoard (value 6).  
A dragon hoard can only be picked up once the dragon guarding it has been slain.  
Gold is denoted by ‘G’ on the map.  

Stairs are denoted by ‘\’

Commands:  
- no,so,ea,we,ne,nw,se,sw: moves the player character one block in the appropriate cardinal direction.  
- u <direction>: uses the potion indicated by the direction (e.g. no, so, ea).  
- a <direction>: attacks the enemy in the specified direction.  
- s, d, v, g, t: specifies the race the player wishes to be when starting a game.  
- f: stops enemies from moving until this key is pressed again.  
- r: restarts the game. All stats, inventory, and gold are reset. A new race should be selected.  
- q: allows the player to admit defeat and exit the game.  
  
A game session ends in one of the following ways:  
- the player character reaches the stairs on floor 5,  
- the player character’s health reaches 0,   
- the player restarts the game or quits.  

To start this game:  
1) Clone this repo to a folder  
2) Open Terminal  
3) Change the current working directory to the folder  
4) Do 'make'  
5) If it builds successfully, then do './cc3k.exe'  
6) Enjoy the game!  
