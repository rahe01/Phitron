#include <stdio.h>
#include <math.h>



void fun(int x , int *y){

    x *= 10;
    *y *= 10;

}





int main(){


    int a = 10, b= 20;

    fun(a, &b);
    printf("a = %d, b = %d\n", a, b); 

    return 0;

}