#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int n , t;
    scanf("%d %d",&n,&t);

    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int sum = 0;
    int book_count = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sum <= t){
            book_count++;
           
        }
        

    }
    printf("%d",book_count);







    return 0;
}
