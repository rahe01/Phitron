#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];

    for (int i = 0; i < N; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

      for (int i = 0; i < N; i++)
    {
       a[i] = max -  a[i];
    }
      for (int i = 0; i < N; i++)
    {
       printf("%d ", a[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
