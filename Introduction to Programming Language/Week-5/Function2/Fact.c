#include <stdio.h>
#include <math.h>

long long fun(int x){

    if (x==0)
    {
        return 1;
        /* code */
    }
    

   return x * fun(x -1 );
   
}


int main(){

    int n;
    scanf("%d",&n);
    long long re = fun(n);

    printf("%lld\n", re);



return 0;
}