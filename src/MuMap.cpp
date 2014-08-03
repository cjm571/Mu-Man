/*###########################################
#                                           #
# Filename: MuMap.h                         #
# Creation Date: 2014-07-29                 #
# Creator: CJ McAllister                    #
#                                           #
#                                           #
# Description:                              #
#   Implementation of MuMap class           #
#                                           #
###########################################*/

#include "MuMap.h"


/***** CTORS *****/
MuMap::MuMap()
    : m_width(24), m_height(22)
{
}

MuMap::~MuMap()
{
    std::vector< std::vector<UINT> >::iterator itr;
    for (itr=m_vContents.begin(); itr!=m_vContents.end(); ++itr)
    {
        (*itr).clear();
    }

    m_vContents.clear();
}


/***** PUBLIC METHODS *****/
eMuResult MuMap::initDefault()
{
    eMuResult mr = S_OK;

    UINT row00[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    UINT row01[] = {0,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,0};
    UINT row02[] = {0,2,0,0,0,2,0,0,0,0,2,0,2,0,0,0,0,2,0,0,0,2,0};
    UINT row03[] = {0,3,0,0,0,2,0,0,0,0,2,0,2,0,0,0,0,2,0,0,0,3,0};
    UINT row04[] = {0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0};
    UINT row05[] = {0,2,0,0,0,2,0,2,0,0,0,0,0,0,0,2,0,2,0,0,0,2,0};
    UINT row06[] = {0,2,2,2,2,2,0,2,2,2,2,0,2,2,2,2,0,2,2,2,2,2,0};
    UINT row07[] = {0,0,0,0,0,2,0,0,0,0,1,0,1,0,0,0,0,2,0,0,0,0,0};
    UINT row08[] = {0,1,1,1,0,2,0,1,1,1,1,6,1,1,1,1,0,2,0,1,1,1,0};
    UINT row09[] = {0,0,0,0,0,2,0,1,0,0,0,1,0,0,0,1,0,2,0,0,0,0,0};
    UINT row10[] = {0,1,1,1,1,2,1,1,0,1,6,6,6,1,0,1,1,2,1,1,1,1,0};
    UINT row11[] = {0,0,0,0,0,2,0,1,0,0,0,0,0,0,0,1,0,2,0,0,0,0,0};
    UINT row12[] = {0,1,1,1,0,2,0,1,1,1,1,4,1,1,1,1,0,2,0,1,1,1,0};
    UINT row13[] = {0,0,0,0,0,2,0,1,0,0,0,0,0,0,0,1,0,2,0,0,0,0,0};
    UINT row14[] = {0,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,0};
    UINT row15[] = {0,2,0,0,0,2,0,0,0,0,2,0,2,0,0,0,0,2,0,0,0,2,0};
    UINT row16[] = {0,3,2,2,0,2,2,2,2,2,2,5,2,2,2,2,2,2,0,2,2,3,0};
    UINT row17[] = {0,0,0,2,0,2,0,2,0,0,0,0,0,0,0,2,0,2,0,2,0,0,0};
    UINT row18[] = {0,2,2,2,2,2,0,2,2,2,2,0,2,2,2,2,0,2,2,2,2,2,0};
    UINT row19[] = {0,2,0,0,0,0,0,0,0,0,2,0,2,0,0,0,0,0,0,0,0,2,0};
    UINT row20[] = {0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0};
    UINT row21[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    m_vContents.push_back(std::vector<UINT>(row00, row00 + sizeof(row00) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row01, row01 + sizeof(row01) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row02, row02 + sizeof(row02) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row03, row03 + sizeof(row03) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row04, row04 + sizeof(row04) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row05, row05 + sizeof(row05) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row06, row06 + sizeof(row06) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row07, row07 + sizeof(row07) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row08, row08 + sizeof(row08) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row09, row09 + sizeof(row09) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row10, row10 + sizeof(row10) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row11, row11 + sizeof(row11) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row12, row12 + sizeof(row12) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row13, row13 + sizeof(row13) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row14, row14 + sizeof(row14) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row15, row15 + sizeof(row15) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row16, row16 + sizeof(row16) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row17, row17 + sizeof(row17) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row18, row18 + sizeof(row18) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row19, row19 + sizeof(row19) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row20, row20 + sizeof(row20) / sizeof(UINT)));
    m_vContents.push_back(std::vector<UINT>(row21, row21 + sizeof(row21) / sizeof(UINT)));

    return mr;
}