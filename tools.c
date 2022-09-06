#include "tools.h"

int ascendingTwoValue(int value1, int value2)
{
    if(value1 == value2)
    {
        printf("The values must be different");
        return 0;
    }
    if (value1 > value2)
    {
        printf("%d < %d", value2, value1);
        return 0;
    }
    else
    {
        printf("%d < %d", value1, value2);
        return 0;
    }
}

int ascendingThreeValue(int value1, int value2, int value3)
{
    if(value1 == value2 || value1 == value3 || value2 == value3)
    {
        printf("The values must be different");
        return 0;
    }
    if(value1 < value2 && value1 < value3 && value2 < value3)
    {
        printf("%d < %d < %d", value1, value2, value3);
        return 0;
    }
    if(value1 < value2 && value1 < value3 && value2 > value3)
    {
        printf("%d < %d < %d", value1, value3, value2);
        return 0;
    }
    if(value2 < value1 && value2 < value3 && value1 > value3)
    {
        printf("%d < %d < %d", value2, value3, value1);
        return 0;
    }
    if(value2 < value1 && value2 < value3 && value1 < value3)
    {
        printf("%d < %d < %d", value2, value1, value3);
        return 0;
    }
    if(value3 < value1 && value3 < value2 && value1 < value2)
    {
        printf("%d < %d < %d", value3, value1, value2);
        return 0;
    }
    if(value3 < value1 && value3 < value2 && value1 > value2)
    {
        printf("%d < %d < %d", value3, value2, value1);
        return 0;
    }
}
