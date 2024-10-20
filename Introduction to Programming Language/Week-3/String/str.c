#include <stdio.h>

int main(){

    char str[100] ;

    fgets(str, sizeof(str), stdin);

    // scanf("%[^\n]s", str);
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c", str[i]); // Output: a, b, c, d
    //     /* code */
    // }
    // printf("%s", str);

    fputs(str , stdout);
    
    return 0;
}