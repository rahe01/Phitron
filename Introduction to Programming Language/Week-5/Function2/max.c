#include <stdio.h>
#include <math.h>





void max(){
    int n;
    scanf("%d",&n);
    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);

        /* code */
    }

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("%d", max);
    
    
}







int main(){

max();

    return 0;
}