#include <stdio.h>

#include <string.h>
#include <stdlib.h>
#include <math.h>

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    int result = add(a, b);

    printf("%d" ,result );

    return 0;
}