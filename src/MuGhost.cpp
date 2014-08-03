/*###########################################
#                                           #
# Filename: MuGhost.cpp                     #
# Creation Date: 2014-08-02                 #
# Creator: CJ McAllister                    #
#                                           #
#                                           #
# Description:                              #
#   Implementation of MuGhost class         #
#                                           #
###########################################*/

#include "MuGhost.h"


/***** CTORS *****/
MuGhost::MuGhost()
    : m_vitality(Standard), m_direction(Down)
{
}

MuGhost::MuGhost(std::pair<UINT,UINT> _location)
    : m_vitality(Standard), m_direction(Down)
{
    m_location = _location;
}

MuGhost::~MuGhost()
{
}
