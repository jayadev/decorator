#ifndef FILLEDBOXDECORATOR_H
#define FILLEDBOXDECORATOR_H

#include <iostream>
#include "asciiartdecorator.h"
#include "blank.h"

/**
 *  Decorates the underlying AsciiArt with a filledbox.
 */
class FilledBoxDecorator : public AsciiArtDecorator {
    int top;
    int bottom;
    int left;
    int right;
    char fillChar;

 public:
    FilledBoxDecorator(int _top,
                       int _bottom,
                       int _left,
                       int _right,
                       char _fillChar,
                       AsciiArt* _asciiArt);
    ~FilledBoxDecorator();

    char charAt(int row, int col, int tick);
};

#endif
