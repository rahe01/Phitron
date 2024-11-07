#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int operation_Count(char a, char b, char c)
{
    if (a == b && b == c)
    {
        return 0;
    }
    else if (a == b || a == c || b == c)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{

    char a[101], b[101], c[101];
    scanf("%s %s %s", a, b, c);

    int len = strlen(a);
    int total_operations = 0;
    for (int i = 0; i < len; i++){
        total_operations += operation_Count(a[i], b[i], c[i]);
    }
    printf("%d\n", total_operations);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
