/*###############################################
#                                               #
# Filename: MuFruit.h                           #
# Creation Date: 2014-08-02                     #
# Creator: CJ McAllister                        #
#                                               #
#                                               #
# Description:                                  #
#   Class definition for MuFruit object         #
#   Follows spec laid out at:                   #
#   http://icfpcontest.org/specification.html   #
#                                               #
###############################################*/
#pragma once

#include "StdAfx.h"

#include <utility>

class MuFruit
{
// Ctors
public:
    // Default Constructor
    MuFruit();

    // Creates MuFruit with given location
    MuFruit(std::pair<UINT,UINT> _location);

    // Destructor;
    ~MuFruit();

// Data Members
private:
    // Vitality
    // Countdown to expiry of fruit, 0 indicates inactive
    UINT m_vitality;

    // Location
    // (x, y) map coordinates
    std::pair<UINT,UINT> m_location;

// Accessors
public:
    UINT getVitality()                  {return m_vitality;};
    std::pair<UINT,UINT> getLocation()  {return m_location;};
};