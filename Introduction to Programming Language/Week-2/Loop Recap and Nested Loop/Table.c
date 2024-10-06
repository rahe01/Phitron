#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    scanf("%d", &n);
 
 for (int j = 1; j <= n; j++)
 {
    /* code */  for (int i = 1; i <= 20; i++)
    {
        printf("%d x %2d = %d \n", j, i, j * i);
    }
    printf("\n");
 }
 

  

    return 0;
}