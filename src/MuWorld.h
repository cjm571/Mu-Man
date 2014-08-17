/*###############################################
#                                               #
# Filename: MuWorld.h                           #
# Creation Date: 2014-08-02                     #
# Creator: CJ McAllister                        #
#                                               #
#                                               #
# Description:                                  #
#   Class definition for MuWorld object, which  #
#   defines and maintains game world state      #
#   Follows spec laid out at:                   #
#   http://icfpcontest.org/specification.html   #
#                                               #
###############################################*/
#pragma once

#include "StdAfx.h"
#include "MuMap.h"
#include "MuMan.h"
#include "MuGhost.h"
#include "MuFruit.h"

#include <vector>

class MuWorld
{
// Ctors
public:
    // Default Constructor
    MuWorld();

    // Creates world with given inputs
    MuWorld(MuMap _map, MuMan _muMan, std::vector<MuGhost> _vGhosts, MuFruit _arrFruits[2]);

    // Destructor
    ~MuWorld();

// Data Members
private:
    // World map
    MuMap m_map;

    // MuMan
    MuMan m_muMan;

    // Ghost vector
    std::vector<MuGhost> m_vGhosts;

    // Fruit array
    MuFruit* m_arrFruits;

// Accessors
public:
    MuMap getMap()                      {return m_map;};
    MuMan getMuMan()                    {return m_muMan;};
    std::vector<MuGhost> getGhosts()    {return m_vGhosts;};
    MuFruit* getFruits()                {return m_arrFruits;};
};
