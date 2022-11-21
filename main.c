#include <stdio.h>
#include "ColorCoding/ColorCoding.h"
#include "Test/Test.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    printf("Hello World");

    return 0;
}
