#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{

    int tourDays = 5;

    if (tourDays == 2)
    {
        bool isBoatAvailable = true;
        if (isBoatAvailable)
        {
            printf("Going to taungur haor");
        }
        else
        {
            printf("Boat is not available for today");
        }
    }

    else if (tourDays == 4)
    {
        bool isShipAvailable = true;
        if (isShipAvailable)
        {
            printf("Going to Koh Samui");
        }
        else
        {
            printf("going to coxs bazr");
        }
    }


    else{
        printf("Gohore bose thako");
    }

    return 0;
}