#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A , B;
    scanf("%d %d", &A , &B);


    int *a = &A;
    int *b = &B;

    int difference = abs(*a - *b);

    printf("%d", difference);









    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
