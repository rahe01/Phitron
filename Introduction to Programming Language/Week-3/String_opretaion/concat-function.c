#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "Hello";
    char b[20] = "World";

    strcat(a, b);
    printf("%s\n", a);

    return 0;
}