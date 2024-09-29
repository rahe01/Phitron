#include <stdio.h>
#include <math.h>

int main()
{

    int a;

    scanf("%d", &a);

    if (a < 5)
    {
        printf("a is less than 5");
    }

    else if (a < 10)
    {
        printf("a is less than 10");
    }

    else if (a < 50)
    {
        printf("a is less than or equal to 50");
    }

    else
    {
        printf("a is greater than or equal to 50");
    }

    return 0;
}