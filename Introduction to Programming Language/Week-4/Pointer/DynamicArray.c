#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){


    int *a = (int *)malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++){
       a[i] = i+1;
    }


    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
        /* code */
    }

    int temp = a;



    a = (int *)realloc(a , 10 *(sizeof(int)));
    

    if (a == NULL)
    {
        a = temp;
       
    }
  
    for (int i = 5; i < 10; i++)
    {
        /* code */
        a[i] = 100;

    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
        /* code */
    }

    free(a);

    
    


    return 0;
}