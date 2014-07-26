#############################################
#                                           #
# Filename: main.py                         #
# Creation Date: 2014-07-25                 #
# Author: CJ McAllister                     #
#                                           #
#                                           #
# Description:                              #
#   Main loop for simulating Lambda-Man's   #
#   main MainProcessor                      #
#                                           #
#############################################

import logging as log
import sys

from mu_man import MuMan

# Global variables
UTC = 0 # Ultimate Tick Clock

# Main processor loop
def main():
    log.info("Begin MainProcessor simulation")
    global UTC

    # Set initial state of game
    log.info("Begin state initialization")
    
    # Map state
    mapWidth = 24
    mapHeight = 22
    mapClosure =   {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,0},
                    {0,2,0,0,0,2,0,0,0,0,2,0,2,0,0,0,0,2,0,0,0,2,0},
                    {0,3,0,0,0,2,0,0,0,0,2,0,2,0,0,0,0,2,0,0,0,3,0},
                    {0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0},
                    {0,2,0,0,0,2,0,2,0,0,0,0,0,0,0,2,0,2,0,0,0,2,0},
                    {0,2,2,2,2,2,0,2,2,2,2,0,2,2,2,2,0,2,2,2,2,2,0},
                    {0,0,0,0,0,2,0,0,0,0,1,0,1,0,0,0,0,2,0,0,0,0,0},
                    {0,1,1,1,0,2,0,1,1,1,1,6,1,1,1,1,0,2,0,1,1,1,0},
                    {0,0,0,0,0,2,0,1,0,0,0,1,0,0,0,1,0,2,0,0,0,0,0},
                    {0,1,1,1,1,2,1,1,0,1,6,6,6,1,0,1,1,2,1,1,1,1,0},
                    {0,0,0,0,0,2,0,1,0,0,0,0,0,0,0,1,0,2,0,0,0,0,0},
                    {0,1,1,1,0,2,0,1,1,1,1,4,1,1,1,1,0,2,0,1,1,1,0},
                    {0,0,0,0,0,2,0,1,0,0,0,0,0,0,0,1,0,2,0,0,0,0,0},
                    {0,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,0},
                    {0,2,0,0,0,2,0,0,0,0,2,0,2,0,0,0,0,2,0,0,0,2,0},
                    {0,3,2,2,0,2,2,2,2,2,2,5,2,2,2,2,2,2,0,2,2,3,0},
                    {0,0,0,2,0,2,0,2,0,0,0,0,0,0,0,2,0,2,0,2,0,0,0},
                    {0,2,2,2,2,2,0,2,2,2,2,0,2,2,2,2,0,2,2,2,2,2,0},
                    {0,2,0,0,0,0,0,0,0,0,2,0,2,0,0,0,0,0,0,0,0,2,0},
                    {0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}

    # Mu-Man state
    mmVit = 0
    mmLoc = {12, 17}
    mmDir = 2
    mmLives = 3
    mmScore = 0
    mmClosure = {mmVit, mmLoc, mmDir, mmLives, mmScore}

    # Ghost state
    gVit = 0
    gDir = 2
    g0Loc = {11, 11}
    g1Loc = {11, 12}
    g2Loc = {11, 13}
    g3Loc = {12, 9}
    g0Closure = {gVit, g0Loc, gDir}
    g1Closure = {gVit, g1Loc, gDir}
    g2Closure = {gVit, g2Loc, gDir}
    g3Closure = {gVit, g3Loc, gDir}
    ghostClosure = {g0Closure, g1Closure, g2Closure, g3Closure}

    # Fruit state
    fruitClosure = 0

    # World state
    worldClosure = {mapClosure, mmClosure, ghostClosure, fruitClosure}

    log.info("State initialization complete")

    # Pass world state to AI
    muMan = MuMan()
    muMan.run(worldClosure, None)
    log.info("State closure passed to AI")

    # main loop
    log.info("Entering main loop")
    while True:
        # Check for EOL
        if UTC >= (127*mapWidth*mapHeight*16):
            log.info("UTC EOL reached. Game over.")
            break

        UTC = UTC + 1


if __name__ == '__main__':
    log.basicConfig(stream=sys.stderr, level=log.DEBUG)
    main()
