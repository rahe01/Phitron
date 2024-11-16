#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d",&n);
    int a[n];

    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int max_score = a[0];
    int min_score = a[0];
    int max = 0;
    int min = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > max_score){
            max_score = a[i];
            max++;
        }
        if (a[i] < min_score){
            min_score = a[i];
            min++;
        }
    }
    printf("%d %d", max, min);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
