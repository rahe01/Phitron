#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{

    int day = 9;

    switch (day)
    {
    case 1:
        printf("Saturday");

        break;
    case 2:
        printf("Sunday");

        break;
    case 3:
        printf("Monday");

        break;
    case 4:
        printf("tuesday");

        break;
    case 5:
        printf("wednesday");

        break;
    case 6:
        printf("thrusday");

        break;
    case 7:
        printf("friday");

        break;

    default:
        printf("Invalid day");
    }

    return 0;
}