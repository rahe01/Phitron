#include <stdio.h>

#include <string.h>
#include <stdlib.h>
#include <math.h>

int add()
{
    int a, b;
    scanf("%d %d", &a, &b);

 int sum = a + b;
  return sum;
   
}

void mul (int x, int y){
    int result = x * y;
    printf("%d", result);
    return;
}

int main()
{

    
    
    mul(add() , 8);

    return 0;
}