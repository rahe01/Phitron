#include <stdio.h>

#include <string.h>
#include <stdlib.h>
#include <math.h>

// int a,b;
int add()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;
    return sum;
}

int main()
{


    printf("%d", add());

    return 0;
}