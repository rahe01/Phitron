#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
   

    char str[10] = "aaaabbbbcc";

    int f[26] = {0};
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        int cha = str[i];

        int index = cha - 'a';
        f[index] = 1;
        /* code */

    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c %d \n ",  i + 'a',f[i] );
        /* code */
    }
    
    


    return 0;
}