#include <math.h>
#include <string.h>
#include <stdio.h>

int main(){

    int n,m;

    scanf("%d %d",&n ,&m);

    int arr[n+5][m+5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
           
        }
        
     
    }

    arr[1][2] = 1000;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",arr[i][j]);
         
        }
        printf("\n");
        
    }
    

    



    return 0;
}