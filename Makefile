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
MPObjList = $(addprefix $(ObjDir)/, MuMap.o)

all: $(BinDir)/MainProc

# Main Processor Sim targets
$(BinDir)/MainProc: $(SrcDir)/MainProc.cpp $(MPObjList) | $(BinDir)
	$(CC) $(CFLAGS) -I$(BOOST_ROOT) $(SrcDir)/MainProc.cpp $(MPObjList) -o $@

$(ObjDir)/MuMap.o: $(SrcDir)/MuMap.cpp $(SrcDir)/MuMap.h | $(ObjDir)
	$(CC) -c $(CLFAGS) -I$(BOOST_ROOT) $(SrcDir)/MuMap.cpp -o $@


# Utility targets
$(ObjDir):
	mkdir -p $(ObjDir)
$(BinDir):
	mkdir -p $(BinDir)

clean:
	rm -rf $(ObjDir)
	rm -rf $(BinDir)