#include "movingboxdecorator.h"
#include <iostream>

/**
 *  If tick is even then we show the underlying Ascii art else be transparent.
 */
char MovingBoxDecorator::charAt(int row, int col, int tick) {

    int currTop, currBottom, currLeft, currRight;

    switch (dir) {
        case 'u':
            currTop = top - tick;
            currBottom = bottom - tick;
            currLeft = left;
            currRight = right;
            break;
        case 'd':
            currTop = top + tick;
            currBottom = bottom + tick;
            currLeft = left;
            currRight = right;
            break;
        case 'l':
            currTop = top;
            currBottom = bottom;
            currLeft = left - tick;
            currRight = right - tick;
            break;
        case 'r':
            currTop = top;
            currBottom = bottom;
            currLeft = left + tick;
            currRight = right + tick;
            break;
        default:
            currTop = top;
            currBottom = bottom;
            currLeft = left;
            currRight = right;
    }

    if (row >= currTop && row <= currBottom && col >= currLeft && col <= currRight)
        return fillChar;
    else
        return AsciiArtDecorator::charAt(row, col, tick);

}

MovingBoxDecorator::~MovingBoxDecorator() {}
