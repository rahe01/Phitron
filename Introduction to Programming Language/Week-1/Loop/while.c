#include <stdio.h>
#include <math.h>

int main()
{

    printf("Before loop \n");
    int i = 5;

    while (i >= 0)
    {

        printf("Inside while loop \n");
        printf("i = %d \n", i);
        i--;
    }

    printf("After loop \n");


    printf("Before for loop \n");
     i = 1;

    for(;i <= 5;)
    {

        printf("Inside for loop \n");
        printf("i = %d \n", i);
        i++;
    }

    printf("After for loop \n");

    return 0;
}