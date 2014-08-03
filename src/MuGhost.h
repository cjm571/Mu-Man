/*###############################################
#                                               #
# Filename: MuGhost.h                           #
# Creation Date: 2014-08-02                     #
# Creator: CJ McAllister                        #
#                                               #
#                                               #
# Description:                                  #
#   Class definition for MuGhost object         #
#   Follows spec laid out at:                   #
#   http://icfpcontest.org/specification.html   #
#                                               #
###############################################*/
#pragma once

#include "StdAfx.h"

#include <utility>

class MuGhost
{
// Ctors
public:
    // Default Constructor
    MuGhost();

    // Creates MuGhost at given location
    MuGhost(std::pair<UINT,UINT> _location);

    // Destructor
    ~MuGhost();

// Data Members
private:
    // Vitality
    // 0: standard, 1: fright, 2: invisible
    eGhostVitality m_vitality;

    // Location
    // (x, y) map coordinates
    std::pair<UINT,UINT> m_location;

    // Direction
    // 0: Up, 1: Right, 2: Down, 3: left
    eDirection m_direction;

// Accessors
public:
    eGhostVitality getVitality()        {return m_vitality;};
    std::pair<UINT,UINT> getLocation()  {return m_location;};
    eDirection getDirection()           {return m_direction;};
};