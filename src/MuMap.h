/*###############################################
#                                               #
# Filename: MuMap.h                             #
# Creation Date: 2014-07-29                     #
# Creator: CJ McAllister                        #
#                                               #
#                                               #
# Description:                                  #
#   Class definition for MuMap object           #
#   Follows spec laid out at:                   #
#   http://icfpcontest.org/specification.html   #
#                                               #
###############################################*/
#pragma once

#include "StdAfx.h"

#include <vector>


class MuMap
{
// Ctors
public:
    // Default Constructor
    // Creates map laid out at http://icfpcontest.org/game.html
    MuMap();

    // Creates map based on input parameter
    MuMap(char**_contents);

    // Destructor
    ~MuMap();

// Data members
private:
    UINT m_width;
    UINT m_height;
    std::vector< std::vector<UINT> > m_vContents;

// Accesors
public:
    UINT getWidth()     {return m_width;};
    UINT getHeight()    {return m_height;};

// Public Methods
public:
    // Initializes default map. See /res/default_map.dat
    eMuResult initDefault();
};