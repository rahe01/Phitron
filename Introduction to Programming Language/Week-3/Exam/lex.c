#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    char b[1000];
    char c[1000];

    scanf("%s %s %s", a, b, c);

    char *max_char = a;
    char *min_char = a;

    if (strcmp(b, min_char) < 0)
    {
        min_char = b;
    }
    if (strcmp(b, max_char) > 0)
    {
        max_char = b;
    }

    if (strcmp(c, min_char) < 0)
    {
        min_char = c;
    }
    if (strcmp(c, max_char) > 0)
    {
        max_char = c;
    }

    printf("%s\n", min_char);
    printf("%s\n", max_char);

    return 0;
}
