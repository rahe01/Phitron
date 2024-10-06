#include <stdio.h>
#include <math.h>

int main(){

    for (int i = 100; i < 300; i++)
    {
        /* code */

        if (i %2 == 0 && i % 3 == 0 && i % 5 ==0)
        {
            printf("%d\n", i);
            continue;
        }
        printf("%d not a number\n ", i);
        
    }
    



    return 0;
}