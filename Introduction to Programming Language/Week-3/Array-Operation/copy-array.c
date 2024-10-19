#include <stdio.h>
#include <math.h>

int a[100000], b[10000];
int main()
{

    int length1 =0, length2 =0;

    scanf("%d",&length1);
    for(int i = 0; i < length1; i++){
        scanf("%d",&a[i]);
    }

    printf("Befor Copy \n");

     for (int i = 0; i < length1; i++)
     {
        /* code */
        printf("%d ",a[i]);
     }
     printf("\n");

      for (int i = 0; i < length1; i++)
     {
        /* code */
        printf("%d ",b[i]);
     }

     for (int  i = 0; i < length1; i++)
     {
        b[i] = a[i];
        /* code */
     }
     a[2] =100;
     

      printf("After Copy \n");

     for (int i = 0; i < length1; i++)
     {
        /* code */
        printf("%d ",a[i]);
     }
     printf("\n");

      for (int i = 0; i < length1; i++)
     {
        /* code */
        printf("%d ",b[i]);
     }

     
     

    return 0;
}