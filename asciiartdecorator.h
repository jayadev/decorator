#ifndef ASCIIARTDECORATOR_H
#define ASCIIARTDECORATOR_H
#include "asciiart.h"
#include <iostream>

/**
 * Decorator base class : Decorates the underlying AsciiArt provided.
 */
class AsciiArtDecorator : public AsciiArt {
    AsciiArt* asciiArt;
 public:
    AsciiArtDecorator(AsciiArt* _asciiArt):asciiArt(_asciiArt){}
   ~AsciiArtDecorator();

   char charAt(int row, int col, int tick);
};

#endif
