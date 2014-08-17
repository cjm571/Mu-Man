/*###########################################
#                                           #
# Filename: MuWorld.cpp                     #
# Creation Date: 2014-08-02                 #
# Creator: CJ McAllister                    #
#                                           #
#                                           #
# Description:                              #
#   Implementation of MuWorld class         #
#                                           #
###########################################*/

#include "MuWorld.h"


/***** CTORS *****/
MuWorld::MuWorld()
{
}

MuWorld::MuWorld(MuMap _map, MuMan _muMan, std::vector<MuGhost> _vGhosts, MuFruit*_arrFruits)
{
    m_map = _map;
    m_muMan = _muMan;
    m_vGhosts = _vGhosts;
    m_arrFruits = _arrFruits;
}

MuWorld::~MuWorld()
{
}