#include "blinkdecorator.h"
#include <iostream>

/**
 *  If tick is even then we show the underlying Ascii art else be transparent.
 */
char BlinkDecorator::charAt(int row, int col, int tick) {
    if (tick % 2 == 0)
        return AsciiArtDecorator::charAt(row, col, tick);
    else
        return ' ';
}

BlinkDecorator::~BlinkDecorator() {}
