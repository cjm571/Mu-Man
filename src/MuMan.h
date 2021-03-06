/*###############################################
#                                               #
# Filename: MuMan.h                             #
# Creation Date: 2014-07-30                     #
# Creator: CJ McAllister                        #
#                                               #
#                                               #
# Description:                                  #
#   Class definition for MuMan object           #
#   Follows spec laid out at:                   #
#   http://icfpcontest.org/specification.html   #
#                                               #
###############################################*/
#pragma once

#include "StdAfx.h"

#include <utility>

class MuMan
{
// Ctors
public:
    // Default Constructor
    MuMan();

    // Creates MuMan at given location
    MuMan(std::pair<UINT,UINT> _location);

    // Destructor
    ~MuMan();

// Data Members
private:
    // Vitality
    // Countdown to expiry of active power pill, 0 indicates no active pill
    UINT m_vitality;

    // Location
    // (x, y) map coordinates
    std::pair<UINT,UINT> m_location;

    // Direction
    // 0: Up, 1: Right, 2: Down, 3: left
    eDirection m_direction;

    // Remaining lives
    UINT m_lives;

    // Current score
    UINT m_score;

// Accessors
public:
    UINT getVitality()                  {return m_vitality;};
    std::pair<UINT,UINT> getLocation()  {return m_location;};
    eDirection getDirectorion()         {return m_direction;};
    UINT getRemainingLives()            {return m_lives;};
    UINT getScore()                     {return m_score;};
};