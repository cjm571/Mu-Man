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

#include <iostream>

#include "MuMap.h"

int main()
{
    std::cout << "Begin MainProcessor simulation" << std::endl;
    unsigned int UTC = 0; // Universal Tick Clock

    // Set initial state of game
    std::cout << "Begin state initialization" << std::endl;

    // Set default states
    MuMap map = MuMap();

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