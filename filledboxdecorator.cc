#include "filledboxdecorator.h"
#include "asciiartdecorator.h"
#include <iostream>

FilledBoxDecorator::FilledBoxDecorator(int _top, int _bottom, int _left, int _right,
                                       char _fillChar, AsciiArt* _asciiArt)
                    : AsciiArtDecorator(_asciiArt), top(_top), bottom(_bottom), left(_left),
                    right(_right),fillChar(_fillChar)
{
    std::cout << "Filled box created " << std::endl;

}

/**
 *  If the coordinates are within the box then do the right decoration else
 *  fallback to the default decoration. (Blank Canvas in our case)
 */
char FilledBoxDecorator::charAt(int row, int col, int tick) {

    if (row >= top && row <= bottom && col >= left && col <= right)
        return fillChar;
    else
        return AsciiArtDecorator::charAt(row, col, tick);
}

FilledBoxDecorator::~FilledBoxDecorator() {}


