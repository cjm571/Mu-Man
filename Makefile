##########################
# Author: CJ McAllister	 #
#						 #
# Created on: 2014-07-29 #
##########################

# Compiler variables
CC = g++
CFLAGS = -Wall -std=c++0x 

# Directory variables
SrcDir = ./src
ObjDir = ./obj
BinDir = ./bin
LibDir = ./lib
BOOST_ROOT = $(LibDir)/boost_1_55_0

all: $(BinDir)/MainProc

$(BinDir)/MainProc: $(SrcDir)/MainProc.cpp | $(BinDir)
	$(CC) $(CFLAGS) -I$(BOOST_ROOT) $(SrcDir)/MainProc.cpp -o $@

# Utility targets
$(ObjDir):
	mkdir -p $(ObjDir)
$(BinDir):
	mkdir -p $(BinDir)

clean:
	rm -rf $(ObjDir)
	rm -rf $(BinDir)