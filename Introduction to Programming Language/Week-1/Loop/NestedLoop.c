#include <stdio.h>
#include <math.h>

int main()
{

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 30; j++)
        {
            printf("%d hour  %d min, \n" , i, j );
        }
        printf("\n");
    }

    return 0;
}