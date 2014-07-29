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
    : width(24), height(22)
{
    unsigned int row00[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    unsigned int row01[] = {0,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,0};
    unsigned int row02[] = {0,2,0,0,0,2,0,0,0,0,2,0,2,0,0,0,0,2,0,0,0,2,0};
    unsigned int row03[] = {0,3,0,0,0,2,0,0,0,0,2,0,2,0,0,0,0,2,0,0,0,3,0};
    unsigned int row04[] = {0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0};
    unsigned int row05[] = {0,2,0,0,0,2,0,2,0,0,0,0,0,0,0,2,0,2,0,0,0,2,0};
    unsigned int row06[] = {0,2,2,2,2,2,0,2,2,2,2,0,2,2,2,2,0,2,2,2,2,2,0};
    unsigned int row07[] = {0,0,0,0,0,2,0,0,0,0,1,0,1,0,0,0,0,2,0,0,0,0,0};
    unsigned int row08[] = {0,1,1,1,0,2,0,1,1,1,1,6,1,1,1,1,0,2,0,1,1,1,0};
    unsigned int row09[] = {0,0,0,0,0,2,0,1,0,0,0,1,0,0,0,1,0,2,0,0,0,0,0};
    unsigned int row10[] = {0,1,1,1,1,2,1,1,0,1,6,6,6,1,0,1,1,2,1,1,1,1,0};
    unsigned int row11[] = {0,0,0,0,0,2,0,1,0,0,0,0,0,0,0,1,0,2,0,0,0,0,0};
    unsigned int row12[] = {0,1,1,1,0,2,0,1,1,1,1,4,1,1,1,1,0,2,0,1,1,1,0};
    unsigned int row13[] = {0,0,0,0,0,2,0,1,0,0,0,0,0,0,0,1,0,2,0,0,0,0,0};
    unsigned int row14[] = {0,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,0};
    unsigned int row15[] = {0,2,0,0,0,2,0,0,0,0,2,0,2,0,0,0,0,2,0,0,0,2,0};
    unsigned int row16[] = {0,3,2,2,0,2,2,2,2,2,2,5,2,2,2,2,2,2,0,2,2,3,0};
    unsigned int row17[] = {0,0,0,2,0,2,0,2,0,0,0,0,0,0,0,2,0,2,0,2,0,0,0};
    unsigned int row18[] = {0,2,2,2,2,2,0,2,2,2,2,0,2,2,2,2,0,2,2,2,2,2,0};
    unsigned int row19[] = {0,2,0,0,0,0,0,0,0,0,2,0,2,0,0,0,0,0,0,0,0,2,0};
    unsigned int row20[] = {0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0};
    unsigned int row21[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    contents.push_back(std::vector<unsigned int>(row00, row00 + sizeof(row00) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row01, row01 + sizeof(row01) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row02, row02 + sizeof(row02) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row03, row03 + sizeof(row03) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row04, row04 + sizeof(row04) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row05, row05 + sizeof(row05) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row06, row06 + sizeof(row06) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row07, row07 + sizeof(row07) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row08, row08 + sizeof(row08) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row09, row09 + sizeof(row09) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row10, row10 + sizeof(row10) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row11, row11 + sizeof(row11) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row12, row12 + sizeof(row12) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row13, row13 + sizeof(row13) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row14, row14 + sizeof(row14) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row15, row15 + sizeof(row15) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row16, row16 + sizeof(row16) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row17, row17 + sizeof(row17) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row18, row18 + sizeof(row18) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row19, row19 + sizeof(row19) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row20, row20 + sizeof(row20) / sizeof(unsigned int)));
    contents.push_back(std::vector<unsigned int>(row21, row21 + sizeof(row21) / sizeof(unsigned int)));
    
}

MuMap::~MuMap()
{
    std::vector< std::vector<unsigned int> >::iterator itr;
    for (itr=contents.begin(); itr!=contents.end(); ++itr)
    {
        (*itr).clear();
    }

    contents.clear();
}