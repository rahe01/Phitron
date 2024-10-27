#include <math.h>
#include <string.h>
#include <stdio.h>

int main()
{

    int n;

    scanf("%d ", &n);

    int arr[n + 5][n + 5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int element = arr[0][0];
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != element)
                {
                    /* code */
                    flag = 0;
                    break;
                }

                /* code */
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    flag = 0;
                    break;
                    /* code */
                }
            }
        }
    }

    if (flag == 0)
    {
        printf("Not scaller\n");
        /* code */
    }
    else{
        printf("scaller\n");
    }
    

    return 0;
}