#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 1; i <= N; i++) {
        scanf("%d", &a[i]);
    }



    int oneCount = 0;
    int zeroCount = 0;
    for (int i = 1; i <= N; i++) {
        if (a[i] == 1) {
            oneCount++;
        } else {
            zeroCount++;
        }
    }

    printf("%d %d" , zeroCount, oneCount);





    return 0;
}
