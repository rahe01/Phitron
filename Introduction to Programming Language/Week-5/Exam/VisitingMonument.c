#include <stdio.h>

void printInc(int n)
{
    if (n > 0)
    {
        printInc(n - 1);
        printf("%d ", n);
    }
}

void printDec(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        printDec(n - 1);
    }
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        printInc(N);

        printDec(N - 1);

        printf("\n");
    }

    return 0;
}
