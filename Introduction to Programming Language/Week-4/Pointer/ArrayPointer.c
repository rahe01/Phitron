#include <stdio.h>
#include <math.h>

int main(){


    int arr[5] = {1,2,3,4,5};
    int *p = arr;

    printf("%d %d ", &arr[0] , p);

    printf("%d \n",(p+1));


    char r = 'r';
    char *q = &r;
    printf("%d %d", q , q+1);




    return 0;

}