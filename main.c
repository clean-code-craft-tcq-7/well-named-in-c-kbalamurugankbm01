#include <stdio.h>
#include "ColorCoding.h"
#include "Test.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    printf("\n*********Printing Pair Number and Pair Colours*********\n");
    PrintPairNumberAndColorPair();

    return 0;
}
