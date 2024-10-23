#include <stdio.h>
#include <string.h>

int main(){
    char a[10] = "dfd";
    char b[10] = "abcdef";

    int length = strlen(b);
    
    printf("%s %s\n", a, b);

    for (int i = 0; i< length; i++)
    {
        a[i] = b[i];
        /* code */
    }

    a[length] = '\0';
    

    printf("%s %s\n", a, b);



    return 0;
}