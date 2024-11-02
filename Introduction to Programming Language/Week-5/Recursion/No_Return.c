#include <stdio.h>

#include <string.h>
#include <stdlib.h>
#include <math.h>

void add(int a, int b)
{
    printf("fff");
    int sum = a + b;
    printf("%d", sum);
    return;
   
}

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    
    add(a, b);

    return 0;
}