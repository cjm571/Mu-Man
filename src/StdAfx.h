/*###########################################
#                                           #
# Filename: StdAfx.h                        #
# Creation Date: 2014-07-30                 #
# Creator: CJ McAllister                    #
#                                           #
#                                           #
# Description:                              #
#   Global declarations and definitions     #
#                                           #
###########################################*/
#pragma once

// Status return values
enum eMuResult
{
    S_OK    = 0x00000000,
    E_FAIL  = 0x80004005
};

// MuGhost vitality values
enum eGhostVitality
{
    Standard    = 0,
    Fright      = 1,
    Invisible   = 2
};

// MuMan/ghost direction values
enum eDirection
{
    Up      = 0,
    Right   = 1,
    Down    = 2,
    Left    = 3
};

// Utility declarations
typedef unsigned int UINT;