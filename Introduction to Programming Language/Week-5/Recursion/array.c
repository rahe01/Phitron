#include <stdio.h>

int arr[100000] , sum;



int gotoIndex(int i , int n){
    if(i ==n){
        return 0;
    }

    sum +=arr[i];

    gotoIndex(i+1 , n);
}








int main(){

    int n;
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }
    
    sum = 0;
    gotoIndex(0,n);
    printf("%d\n",sum);


    return 0;
}