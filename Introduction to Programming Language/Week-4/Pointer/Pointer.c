#include <stdio.h>
#include <math.h>

int main(){

    int a =23 ,b=78;

    int *x = &a , *y = &b;

    // derefarence

    int temp = *x;

    *x = *y;
    *y = temp;

    printf("After swapping the values: \n");
    printf("Value of a is: %d\n", a);
    printf("Value of b is: %d\n", b);
  

    return 0;
}