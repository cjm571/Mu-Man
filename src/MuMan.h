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

#include "StdAfx.h"


class MuMan
{
// Ctors
public:
    // Default Constructor
    // Creates MuMan
    MuMan();

    // Destructor
    ~MuMan();

// Data Members
private:
    // Vitality
    // Countdown to expiry of active power pill, 0 indicates no active pill
    UINT m_vitality

    // Location
    // (x, y) map coordinate
    std::pair<UINT,UINT> m_location;

    // Direction
    // 0: Up, 1: Right, 2: Down, 3: left
    UINT m_direction

    // Remaining lives
    UINT m_lives;

    // Current score
    UINT m_score;

// Accessors
public:
    UINT getVitality()                  {return m_vitalit;};
    std::par<UINT,UINT> getLocation()   {return m_location;};
    UINT getDirectorion()               {return m_direction;};
    UINT getRemainingLives()            {return m_lives;};
    UINT getScore()                     {return m_score;};
};