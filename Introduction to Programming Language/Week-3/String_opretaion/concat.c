#include <stdio.h>
#include <string.h>

int main(){

    char a[20] = "Hello";
    char b[20] = "World";

      printf("%s\n", a);

    int len_a = strlen(a);
    int len_b = strlen(b);

    int length = len_a + len_b;

    for (int i = len_a , j=0; i < length; i++, j++)
    {
        a[i] = b[j];
    }
    for (int i = len_b , j=0; i < length; i++, j++)
    {
       b[i] = a[j];
    }
    
    a[length] = '\0';
    
    printf("%s\n%s", a ,b);
    



    return 0;
}