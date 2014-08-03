/*###########################################
#                                           #
# Filename: MuFruit.cpp                     #
# Creation Date: 2014-08-02                 #
# Creator: CJ McAllister                    #
#                                           #
#                                           #
# Description:                              #
#   Implementation of MuFruit class         #
#                                           #
###########################################*/

#include "MuFruit.h"


/***** CTORS *****/
MuFruit::MuFruit()
    : m_vitality(0)
{
}

MuFruit::MuFruit(std::pair<UINT,UINT> _location)
    : m_vitality(0)
{
    m_location = _location;
}

MuFruit::~MuFruit()
{
}
