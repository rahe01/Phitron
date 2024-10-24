#include <stdio.h>
#include <string.h>

int main(){
    
    char a[20] = "air";
    char b[20] = "bir";

    int cmp = strcmp(b,a);
    
    printf("%d\n", cmp); // -1 if a < b, 0 if a == b, 1 if a > b





    return 0;
}