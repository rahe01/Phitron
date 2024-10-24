#include <stdio.h>
#include <string.h>

int main(){
    char str[100] = "Hello, World!";
    strrev(str);
    printf("Reversed string: %s\n", str);

    return 0;
}