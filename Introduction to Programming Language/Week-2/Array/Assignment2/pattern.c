#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
            /* code */
        }
        printf("\n");

        /* code */
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
