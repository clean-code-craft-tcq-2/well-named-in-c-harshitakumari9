#include <stdio.h>
#include <assert.h>
#include "Test_ColorPair.h"

int main() 
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    PrintRefManual();
    
    return 0;
}
