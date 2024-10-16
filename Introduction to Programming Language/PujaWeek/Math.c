#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c;
    char s, p;

    scanf("%d %c %d %c %d",&a ,&s , &b ,&p , &c);

   

    if (s == '+')
    {
        if ((a+b) == c)
        {
            printf("Yes");
            /* code */
        }
        else{
            printf("%d", (a+b));
            /* code */
        }
        
        /* code */
    }
    
   else if (s == '-')
    {
        if ((a-b) == c)
        {
            printf("Yes");
            /* code */
        }
        else{
            printf("%d", (a-b));
            /* code */
        }
        
        /* code */
    }
   else if (s == '*')
    {
          if ((a*b) == c)
        {
            printf("Yes");
            /* code */
        }
        else{
            printf("%d", (a*b));
            /* code */
        } 
          
    }
    






    return 0;
}