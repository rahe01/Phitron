#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *a = (int *)malloc(sizeof(int) *1);

    for (int i = 0; i < n; i++) {
     
      int num; 
      scanf("%d", &num);


        a = (int *)realloc(a, sizeof(int) * (i + 1));
        a[i] = num;








    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        /* code */
    }

    free(a);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
