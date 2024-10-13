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

    int position;
    scanf("%d", &position);
  


    if (position >=1 && position <=N)
    {
        a[position -1] = 1 - a[position -1];
        /* code */
    }
    




      for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
