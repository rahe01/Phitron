#include <math.h>
#include <string.h>
#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

int firstdia = 0;
int seconddia = 0;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i ==j)
            {
                firstdia = firstdia + a[i][j];
                /* code */
            }

            if (i+j == n-1)
            {
                seconddia = seconddia + a[i][j];
                /* code */
            }
            
            
        }
    }


    printf("%d\n", firstdia);
    printf("%d\n", seconddia);


    return 0;
}