/*###########################################
#                                           #
# Filename: MuMan.cpp                       #
# Creation Date: 2014-08-02                 #
# Creator: CJ McAllister                    #
#                                           #
#                                           #
# Description:                              #
#   Implementation of MuMan class           #
#                                           #
###########################################*/

#include "MuMan.h"


/***** CTORS *****/
MuMan::MuMan()
    : m_vitality(0), m_direction(Down), m_lives(3), m_score(0)
{
}

MuMan::MuMan(std::pair<UINT,UINT> _location)
    : m_vitality(0), m_direction(Down), m_lives(3), m_score(0)
{
    m_location = _location;
}

MuMan::~MuMan()
{
}
