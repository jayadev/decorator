#ifndef BLINKDECORATOR_H
#define BLINKDECORATOR_H

#include "asciiartdecorator.h"
#include <iostream>


class BlinkDecorator: public AsciiArtDecorator {

 public:
    explicit BlinkDecorator(AsciiArt *_asciiArt): AsciiArtDecorator(_asciiArt) {}

    char charAt(int row, int col, int tick);

    ~BlinkDecorator();
};

#endif
