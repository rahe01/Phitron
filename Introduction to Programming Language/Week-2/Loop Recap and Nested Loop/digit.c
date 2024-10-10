#include <stdio.h>
#include <math.h>

int main()

{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        if (n == 0)
        {
            printf("0");
        }

        while (n > 0)
        {
            int digit = n % 10;
            printf("%d ", digit);
            n = n / 10;
        }
        printf("\n");
    }

    return 0;
}