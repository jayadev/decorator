#include <iostream>
#include "asciiart.h"
#include "blank.h"
#include "studio.h"
#include "filledboxdecorator.h"
#include "blinkdecorator.h"

int main () {
  AsciiArt *canvas = new Blank;

  //Studio s{canvas};
  Studio *s = new Studio(canvas);
  std::string command;

  while (std::cin >> command) {
    if (command == "render" ) {
        std::cout << "Render called " << std::endl;
        s->render();
    }
    else if (command == "animate") {
      int n;
      std::cin >> n;
      s->animate(n);
    }
    else if (command == "reset") {
      s->reset();
    }
    else if (command == "filledbox") {
      int top, bottom, left, right;
      char what;
      std::cin >> top >> bottom >> left >> right >> what;
      canvas = new FilledBoxDecorator(top, bottom, left, right, what, canvas);
      s = new Studio(canvas);

    }
    else if (command == "blinkingbox") {
      int top, bottom, left, right;
      char what;
      std::cin >> top >> bottom >> left >> right >> what;
      canvas = new BlinkDecorator(
               new FilledBoxDecorator(top, bottom, left, right, what, canvas));
      s = new Studio(canvas);

    }
    else if (command == "movingbox") {
      int top, bottom, left, right;
      char what, dir;
      std::cin >> top >> bottom >> left >> right >> what >> dir;

    }
    else if (command == "maskbox") {
      int top, bottom, left, right;
      char what;
      std::cin >> top >> bottom >> left >> right >> what;

    }
  }
}
