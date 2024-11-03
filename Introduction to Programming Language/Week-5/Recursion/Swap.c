#include <stdio.h>

#include <string.h>
#include <stdlib.h>
#include <math.h>

void swap( int *a , int *b )
{



    int temp = *a;
    *a = *b;
    *b = temp;

   
}

int main()
{
    int a = 2, b =5;
    

    swap(&a, &b);
     printf("%d %d", a, b);

    return 0;
}