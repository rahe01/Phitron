#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    scanf("%d", &n);
    int odd = 0;
    int even = 0;
    int positive = 0;
    int negative = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (x > 0)
        {
            positive++;
        }
        else if (x < 0)
        {
            negative++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}