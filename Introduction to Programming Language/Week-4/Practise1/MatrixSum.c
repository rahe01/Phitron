#include <stdio.h>
#include <math.h>

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

    int main = 0;
    int secondary = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {

                main += a[i][j];
            }

            if (i + j == n - 1)
            {
                secondary += a[i][j];
                /* code */
            }
        }
    }

   

    printf("%d" , abs(secondary -main));





    return 0;
}