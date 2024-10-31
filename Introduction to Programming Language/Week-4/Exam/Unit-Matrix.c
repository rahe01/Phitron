#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n][n];

    int truematrix = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* code */
            scanf("%d", &a[i][j]);
        }

        /* code */
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i ==j && a[i][j] != 1) || (i != j && a[i][j]) != 0)
            {
                truematrix = 0;
                /* code */
            }
            
            
         
            
        }
    }

    if (truematrix == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

  

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
