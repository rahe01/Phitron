#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int T;
    scanf("%d", &T);

    while (T--)
    {
        long long m , a,b,c;


        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);

        long long multiply = a * b * c;
        if (multiply ==0 || m % multiply!= 0)
            {
                printf("-1\n");
              
            
            /* code */
        }
        else{
            long long result = m / multiply;
            printf("%lld\n",result);
        }
        
        /* code */
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
