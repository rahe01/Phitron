#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    long long sum = 0;

    for (int i = 1; i <= n; i++)
    {

        sum += a[i];
    }

    if (sum < 0)
    {
        sum *= -1;
        printf("%lld", sum);
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}