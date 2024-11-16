#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int sum = 0;

    for (int i = 1; i <= n; i++){
        if (i % 2 == 0)
        {
            sum += i;
            /* code */
        }
        


    }
    printf("%d\n",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
