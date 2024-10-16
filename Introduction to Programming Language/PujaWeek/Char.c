#include <stdio.h>
#include <math.h>

int main(){
    char n;
    scanf("%c",&n);

    if (n >= 'A' && n <= 'Z')
    {
        printf("%c",n+32);
        /* code */
    }
    else if (n >= 'a' && n <= 'z'){
        printf("%c",n-32);
        /* code */
    }
    
    

    return 0;
}