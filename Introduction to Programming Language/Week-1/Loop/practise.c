#include <stdio.h>
#include <math.h>

int main()
{

    int n = 10;
  
 

    for (int i = 1; i <= n; i++)
    {

        if( i %2 ==0 ){
            printf("%d even \n" , i);
        }
        else{
            printf("%d odd \n" , i);
        }
      
       
    }
   


    // for (char i = '0'; i <= '9'; i++)
    // {
    //  printf("%d \n" ,i);
    // }
    



    return 0;
}