CXX=g++
CXXFLAGS=-std=c++14 -Wall -MMD
OBJECTS=main.o floor/floor.o chamber/chamber.o objects/object.o objects/characters/player/player.o objects/characters/enemies/enemy.o objects/characters/character.o objects/items/item.o objects/items/treasure/treasure.o objects/items/potion/potion.o objects/items/potion/rh.o objects/items/potion/ba.o objects/items/potion/bd.o objects/items/potion/ph.o objects/items/potion/wa.o objects/items/potion/wd.o objects/characters/player/shade.o objects/characters/player/drow.o objects/characters/player/troll.o objects/characters/player/goblin.o objects/characters/player/vampire.o objects/characters/enemies/human.o objects/characters/enemies/dwarf.o objects/characters/enemies/orc.o objects/characters/enemies/elf.o objects/characters/enemies/merchant.o objects/characters/enemies/dragon.o objects/characters/enemies/halfling.o 
DEPENDS=${OBJECTS:.o=.d}
EXEC=cc3k.exe
${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}
clean:
	rm *.o main
.PHONY: clean
