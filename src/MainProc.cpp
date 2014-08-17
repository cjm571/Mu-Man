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
#include "MuMan.h"
#include "MuGhost.h"
#include "MuFruit.h"
#include "MuWorld.h"

#include <iostream>
#include <utility>
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
    
    std::vector<MuGhost> vGhosts;
    vGhosts.push_back(MuGhost(std::make_pair(11,11)));
    vGhosts.push_back(MuGhost(std::make_pair(11,12)));
    vGhosts.push_back(MuGhost(std::make_pair(11,13)));
    vGhosts.push_back(MuGhost(std::make_pair(12,9)));


    MuFruit arrFruits[2];
    arrFruits[0] = MuFruit();
    arrFruits[1] = MuFruit();

    MuWorld muWorld = MuWorld(map, muMan, vGhosts, arrFruits);

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

        // Fruit appearance/expiry check
        
        ++UTC;
    }
}