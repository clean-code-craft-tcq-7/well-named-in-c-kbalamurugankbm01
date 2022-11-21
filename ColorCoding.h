#include <stdio.h>

#ifndef COLORCODING_H
#define COLORCODING_H

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;


//Extern
// extern const char* MajorColorNames[];
// extern const char* MinorColorNames[];
// extern int numberOfMajorColors;
// extern int numberOfMinorColors;
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair);

#endif