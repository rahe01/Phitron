#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c;

    scanf("%d %d %d",&a ,&b ,&c);

    if (a < b&& a <c)
    {
        if (b<c)
        {
            // c maximum
            printf("%d %d %d",a,b,c);
            /* code */
        }
        else{
            // b maximum
            printf("%d %d %d",a,c,b);
            /* code */
        }
        
        /* code */
    }
    


    




    return 0;
}