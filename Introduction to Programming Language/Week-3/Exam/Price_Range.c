#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n , p1, p2;
    scanf("%d %d %d",&n,&p1, &p2);

    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    } 


    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (a[i] >= p1 && a[i] <= p2 )
        {
            count++;
        }
    }
    printf("%d",count);
    












    return 0;
}
