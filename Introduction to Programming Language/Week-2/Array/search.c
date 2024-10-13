#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    long long x;
    scanf("%lld", &x);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("%d\n", i);
            return 0;
            /* code */
        }
    }

    printf("-1\n");

    return 0;
}