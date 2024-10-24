#include <stdio.h>
#include <string.h>


int main(){
     char a[10] = "dfd";
    char b[10] = "abcdef";
         printf("%s %s\n", a, b);

    strcpy(b,a);


      printf("%s %s\n", a, b);


    return 0;
}