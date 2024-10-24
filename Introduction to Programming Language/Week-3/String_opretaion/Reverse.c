#include <stdio.h>
#include <string.h>

int main(){
    char str[10] = "aba";
    char str2[10];
    strcpy(str2, str);
    int len = strlen(str);

    for (int i = 0,  j = len -1; i<=j; i++ , j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
       
    }
    printf("Reversed string: %s\n", str);
    

    return 0;
}