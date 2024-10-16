#include <stdio.h>
#include <math.h>

int main(){

    int a,b;
    char s;

    scanf("%d %c %d",&a ,&s,&b);

   if (s == '>')
   {
    if (a>b)
    {
        printf("Right");
        /* code */
    }
     else{
    printf("Wrong");
    /* code */
   }
    
    /* code */
   }

   else if (s == '<'){
    if (a<b)
    {
        printf("Right");
        /* code */
    }
     else{
    printf("Wrong");
    /* code */
   }
    
    /* code */
   }

   else if (s == '=')
   {
    if (a==b){
        printf("Right");
        /* code */
    }
     else{
    printf("Wrong");
    /* code */
   }
    /* code */
   }
   

   




    return 0;
}