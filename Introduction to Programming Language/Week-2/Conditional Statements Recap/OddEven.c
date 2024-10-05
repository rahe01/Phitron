#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    if( n%2 ==0){
        printf("The number is even.\n");
      
    }
    else{
        printf("The number is odd.\n");
    }

      if(n <0){
            printf("The number is negative.\n");
        }
        else if(n >0) {
            printf("The number is positive.\n");
        }



    return 0;
}