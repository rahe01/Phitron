#include <stdio.h>
#include <math.h>

int main(){

    int a =23 ;

    int *x = &a ;

    int **y = &x;


    printf("%d %d" , &a , **y);


    return 0;
}