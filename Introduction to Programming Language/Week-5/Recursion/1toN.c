#include <stdio.h>

void fun(int x, int n)
{
    if (x < n)
    {
        return;
    }
    printf("The value of x before call is: %d\n", x);

    fun(x - 1, n);
}

int main()
{

    int n = 5;
    fun(n, 1);

    return 0;
}