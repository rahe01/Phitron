#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int *a = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        a[i] = i + 1;
        /* code */
    }

    printf("Array elements after incrementing by 1:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }


    int temp =a;

    a=(int *)realloc(a, 10* sizeof(int));

    if(a==NULL){
        printf("Memory allocation failed\n");
        exit(0);
    }


    for (int i = 5; i < 10; i++)
    {
        a[i] = 10;
        /* code */
    }

   for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    free(a);


    




    return 0;
}