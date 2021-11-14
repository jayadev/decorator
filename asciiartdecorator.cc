#include "asciiartdecorator.h"
#include <iostream>

char AsciiArtDecorator::charAt(int row, int col, int tick) {
    return asciiArt->charAt(row, col, tick);
}
AsciiArtDecorator::~AsciiArtDecorator() {}
