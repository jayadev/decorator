    #ifndef MOVINGBOXDECORATOR_H
    #define MOVINGBOXDECORATOR_H

    #include "asciiartdecorator.h"
    #include <iostream>


    class MovingBoxDecorator: public AsciiArtDecorator {
        int top;
        int bottom;
        int left;
        int right;
        char fillChar;
        char dir;

     public:
        MovingBoxDecorator(int _top, int _bottom, int _left, int _right,
                           char _fillChar, char _dir, AsciiArt *_asciiArt)
                            : AsciiArtDecorator(_asciiArt), top(_top),
                              bottom(_bottom), left(_left), right(_right),
                              fillChar(_fillChar), dir(_dir){}

        char charAt(int row, int col, int tick);

        ~MovingBoxDecorator();
    };

    #endif
