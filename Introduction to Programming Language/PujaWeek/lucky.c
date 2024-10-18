#include <stdio.h>
#include <math.h>

int main(){


    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int min = a[0];
    int min_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min){
            min = a[i];
           
        }
        /* code */
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == min) {
            min_count++;
        }
    }

    if (min_count %2 != 0)
    {
        printf("Lucky");
        /* code */
    }

    else{
        printf("Unlucky");
        /* code */
    }
    
    








    return 0;
}