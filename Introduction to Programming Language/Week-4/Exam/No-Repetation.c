#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

   
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
 
    int f[100001] = {0};  

  
    for(int i = 0; i < n; i++) {
        f[a[i]]++;
    }

    int count = 0;

    for(int i = 1; i <= 100000; i++) {
        if(f[i] == 1) {
            count++;
        }
    }
    
    
    printf("%d\n", count);

    return 0;
}
