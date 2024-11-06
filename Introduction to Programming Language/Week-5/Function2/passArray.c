#include <stdio.h>

int fun(int x[], int n)

{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
        sum += x[i];
        /* code */
    }
    return sum;
}
int main()
{

    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int result = fun(a, 10);
    printf("\nSum = %d\n", result);

    return 0;
}