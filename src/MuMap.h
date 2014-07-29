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

#include <vector>

class MuMap
{
// Ctors
public:
    // Default Constructor
    // Creates map laid out at http://icfpcontest.org/game.html
    MuMap();

    // Creates map based on input parameter
    MuMap(char**_mapContents);

    // Destructor
    ~MuMap();

// Data members
private:
    unsigned int width;
    unsigned int height;
    std::vector< std::vector<unsigned int> > contents;

// Accesor Methods
public:
    unsigned int getWidth() {return width;};
    unsigned int getHeight() {return height;};
};