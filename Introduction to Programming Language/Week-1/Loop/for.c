#include <stdio.h>
#include <math.h>

int main(){

    printf("Before for loop \n");

    for(int i =3; i>=1 ; i-=2){
        printf("Inside for loop \n");
        printf("Value of i = %d \n" , i);
    }

    printf("After for loop");



    return 0;
}