CXX = g++
CXXFLAGS = -std=c++14 -Wall -MMD
EXEC = a4q2
OBJECTS = studio.o asciiart.o blank.o asciiartdecorator.o filledboxdecorator.o blinkdecorator.o movingboxdecorator.o main.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
