#include <assert.h>
#include <stdio.h>
#include "ColorCoding.h"

#ifndef TEST_H
#define TEST_H

extern void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);

extern void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber);

#endif