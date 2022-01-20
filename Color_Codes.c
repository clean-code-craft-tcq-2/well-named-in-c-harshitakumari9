#include "Color_Codes.h"
#include <stdio.h>

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
ColorPair GetColorFromPairNumber(int pairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void ColorPairToString(const ColorPair* colorPair, char* buffer) 
{
    sprintf(buffer, "%s %s", MajorColorNames[colorPair->majorColor], MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) 
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor = (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) 
{
    return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}

void PrintRefManual()
{
    unsigned int choice, pairnum=1;
    printf("Press 1 to get Reference Manual for Color Codes\n");
    scanf("%u",&choice);
    if(choice==1)
    {
       for(unsigned int majorcolorname=0;majorcolorname<5;majorcolorname++)
        {
            for(unsigned int minorcolorname=0;minorcolorname<5;minorcolorname++)
            {
                printf("%s\t%s\t%u\n", MajorColorNames[majorcolorname],MinorColorNames[minorcolorname],pairnum);
                pairnum++;
            }
        } 
    }
    else
    {
        printf("Invalid Entry !");
    }
}
