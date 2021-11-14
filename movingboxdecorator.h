#ifndef MOVINGBOXDECORATOR_H
#define MOVINGBOXDECORATOR_H

#include "asciiartdecorator.h"
#include <iostream>


class MovingBoxDecorator: public AsciiArtDecorator {

 public:
    explicit MovingBoxDecorator(AsciiArt *_asciiArt): AsciiArtDecorator(_asciiArt) {}

    char charAt(int row, int col, int tick);

    ~MovingBoxDecorator();
};

#endif
