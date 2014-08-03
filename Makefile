##########################
# Author: CJ McAllister	 #
#						 #
# Created on: 2014-07-29 #
##########################

# Compiler variables
CC = g++
CFLAGS = -Wall -Wno-unused-local-typedefs -std=c++0x 

# Directory variables
SrcDir = ./src
ObjDir = ./obj
BinDir = ./bin
LibDir = ./lib
BOOST_ROOT = $(LibDir)/boost_1_55_0

# Object list variables
MPObjList = $(addprefix $(ObjDir)/, MuMap.o MuMan.o MuGhost.o MuFruit.o MuWorld.o)

all: $(BinDir)/MainProc

# Main Processor Sim targets
$(BinDir)/MainProc: $(SrcDir)/MainProc.cpp $(MPObjList) | $(BinDir)
	$(CC) $(CFLAGS) -I$(BOOST_ROOT) $(SrcDir)/MainProc.cpp $(MPObjList) -o $@

$(ObjDir)/MuMap.o: $(SrcDir)/MuMap.cpp $(SrcDir)/MuMap.h | $(ObjDir)
	$(CC) -c $(CLFAGS) -I$(BOOST_ROOT) $(SrcDir)/MuMap.cpp -o $@
$(ObjDir)/MuMan.o: $(SrcDir)/MuMan.cpp $(SrcDir)/MuMan.h | $(ObjDir)
	$(CC) -c $(CLFAGS) -I$(BOOST_ROOT) $(SrcDir)/MuMan.cpp -o $@
$(ObjDir)/MuGhost.o: $(SrcDir)/MuGhost.cpp $(SrcDir)/MuGhost.h | $(ObjDir)
	$(CC) -c $(CLFAGS) -I$(BOOST_ROOT) $(SrcDir)/MuGhost.cpp -o $@
$(ObjDir)/MuFruit.o: $(SrcDir)/MuFruit.cpp $(SrcDir)/MuFruit.h | $(ObjDir)
	$(CC) -c $(CLFAGS) -I$(BOOST_ROOT) $(SrcDir)/MuFruit.cpp -o $@
$(ObjDir)/MuWorld.o: $(SrcDir)/MuWorld.cpp $(SrcDir)/MuWorld.h | $(ObjDir)
	$(CC) -c $(CLFAGS) -I$(BOOST_ROOT) $(SrcDir)/MuWorld.cpp -o $@


# Utility targets
$(ObjDir):
	mkdir -p $(ObjDir)
$(BinDir):
	mkdir -p $(BinDir)

clean:
	rm -rf $(ObjDir)
	rm -rf $(BinDir)