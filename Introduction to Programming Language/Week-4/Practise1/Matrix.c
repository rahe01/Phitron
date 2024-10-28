#include <stdio.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int item;
    scanf("%d", &item);

    int take = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == item)
            {
                take = 1;
                break;
            }
        }
    }

    if (take == 1)
    {
        printf("will not take number\n");
      
    }
    else
    {
        printf("will take number");
    }

    return 0;
}