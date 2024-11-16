#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[100], t[100];
    scanf("%s %s", s, t);
    int len_s = strlen(s);
    int len_t = strlen(t);

    int f_s[26] = {0};
    int f_t[26] = {0};

   

    if (len_s != len_t)
    {

        printf("NO\n");
        return 0;
        /* code */
    }
     
    

    for (int i = 0; i < len_s; i++)
    {
        f_s[s[i] - 'a']++;
        f_t[t[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (f_s[i] != f_t[i])
        {
            printf("NO\n");
            return 0;
        }

        /* code */
    }

    printf("YES\n");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
