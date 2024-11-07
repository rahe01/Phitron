#include <stdio.h>
#include <math.h>



void minmax(){
    int n;
    scanf("%d", &n);
    int arr[n];


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        /* code */
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
                if (arr[i] < min)
        {
            min = arr[i];
            /* code */
        }
     if (arr[i] > max){
            max = arr[i];
            /* code */
        }
        
        /* code */
    }
    
    
    printf("%d %d\n", min, max);





}




int main(){


    minmax();





    return 0;
}