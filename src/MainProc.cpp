/*###########################################
#                                           #
# Filename: MainProc.cpp                    #
# Creation Date: 2014-07-29                 #
# Creator: CJ McAllister                    #
#                                           #
#                                           #
# Description:                              #
#   Main loop for simulating Lambda-Man's   #
#   main MainProcessor                      #
#                                           #
###########################################*/

#include "StdAfx.h"
#include "MuMap.h"

#include <iostream>
#include <pair>
#include <vector>


int main()
{
    std::cout << "Begin MainProcessor simulation" << std::endl;
    UINT UTC = 0; // Universal Tick Clock

    // Set initial state of game
    std::cout << "Begin state initialization" << std::endl;

    // Set default states
    //TODO: take input from command line or some shit
    MuMap map = MuMap();
    map.initDefault();
    
    MuMan muMan = MuMan();
    
    std::vector<MuGhost> vMuGhosts;
    MuGhost muGhost0 = MuGhost(std::make_pair(11,11));
    MuGhost muGhost1 = MuGhost(std::make_pair(11,12));
    MuGhost muGhost2 = MuGhost(std::make_pair(11,13));
    MuGhost muGhost3 = MuGhost(std::make_pair(12,9));

    std::vector<MuFruit> vMuFruits;
    MuFruit muFruit0 = MuFruit();
    MuFruit muFruit1 = MuFruit();

    MuWorld muWorld = MuWorld(map, muMan, vMuGhosts, vMuFruits);

    std::cout << "State initialization complete" << std::endl;

    //TODO: pass muWorld object/pointer to AI


    std::cout << "Entering main loop" << std::endl;
    while (true)
    {
        // EOL check
        if (UTC >= (127*map.getWidth()*map.getHeight()*16))
        {
            std::cout << "UTC EOL reached. Game over." << std::endl;
            break;
        }
        
        ++UTC;
    }
}