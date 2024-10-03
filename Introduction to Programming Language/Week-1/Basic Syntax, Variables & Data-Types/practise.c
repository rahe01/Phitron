#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a;
    scanf("%d" , &a);
    
    for(int i =1; i<=a ; i++){
        if(i %5 == 0){
            printf("%d yes\n", i);
            
        }
        printf("%d No\n", i);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
