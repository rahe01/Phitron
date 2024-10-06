#include <stdio.h>

int main(){


     int N;
     scanf("%d" , &N);
     int notEven = 0;

     for(int i = 1; i<=N; i++){
         if(i%2 == 0){
             printf("%d\n", i);
             notEven = 1;
         }
     } 

     if(notEven ==0){
         printf("-1\n");
     }  



    return 0;
}